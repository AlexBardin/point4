#define TIME_CHECK_WI_FI_CONNECTION (5) // проверяем каждые 5 секунд
#define TIME_LOST_CONNECTION_WIFI (30 / TIME_CHECK_WI_FI_CONNECTION)   //30 секунд
#define TIME_RESET_AP_MODE  (300 / TIME_CHECK_WI_FI_CONNECTION)  // 3 минуты
static size_t time_check_wifi_connection = TIME_CHECK_WI_FI_CONNECTION * 1000;
static size_t time_reset_device = 0;
static bool AP_open = false;

/*************************************************/
void WIFIinit() {
  // Попытка подключения к точке доступа
  WiFi.disconnect();
  WiFi.mode(WIFI_STA);
  byte tries = 30;
  if (_set_ip_manual == "true")
  {
    //Serial.println("set manual wi-fi");
    //Serial.println(_ip_device);
    //Serial.println(_mask);
    //Serial.println(_gateway);
    IPAddress ip_dev, ip_gateway, net_mask;
    ip_dev.fromString(_ip_device);
    ip_gateway.fromString(_gateway);
    net_mask.fromString(_mask);
    WiFi.config(ip_dev, ip_gateway, net_mask);
  }
  WiFi.begin(_ssid.c_str(), _password.c_str());
  // Делаем проверку подключения до тех пор пока счетчик tries
  // не станет равен нулю или не получим подключение
  //Serial.print("try connect to wifi");
  while (--tries && WiFi.status() != WL_CONNECTED)
  {
    //Serial.print(".");
    delay(1000);
  }
  //Serial.println("");
  if (WiFi.status() != WL_CONNECTED)
  {
    // Если не удалось подключиться запускаем в режиме AP
    StartAPMode();
    AP_open = true;
  }
  else {
    // Иначе удалось подключиться отправляем сообщение
    // о подключении и выводим адрес IP
    //Serial.println("WiFi connected");
    //Serial.print("IP address: ");
    //Serial.println(WiFi.localIP());
    AP_open = false;
    time_reset_device = TIME_LOST_CONNECTION_WIFI;
  }
}

/*************************************************/
bool StartAPMode() {
  IPAddress apIP(192, 168, 4, 1);
  // Отключаем WIFI
  WiFi.disconnect();
  // Меняем режим на режим точки доступа
  WiFi.mode(WIFI_AP);
  // Задаем настройки сети
  WiFi.softAPConfig(apIP, apIP, IPAddress(255, 255, 255, 0));
  // Включаем WIFI в режиме точки доступа с именем и паролем
  // хронящихся в переменных _ssidAP _passwordAP
  if (_hide_net == "true")
  {
    //Serial.println("WIFI start hiden net");
    WiFi.softAP(_ssidAP.c_str(), _passwordAP.c_str(), 1, 1);
  }
  else
  {
    //Serial.println("WIFI start visible net");
    WiFi.softAP(_ssidAP.c_str(), _passwordAP.c_str());
  }
  delay(1000);
  time_reset_device = TIME_RESET_AP_MODE;
  //Serial.print("Open Acces point name: ");
  //Serial.print(_ssidAP.c_str());
  //Serial.print("; password: ");
  //Serial.print(_passwordAP.c_str());
  //Serial.print("; ip: ");
  //Serial.println(WiFi.softAPIP());
  //Serial.print("AP mode. Reset device after ");
  //Serial.print(time_reset_device * TIME_CHECK_WI_FI_CONNECTION);
   //Serial.println(" sesconds");
  return true;
}


/*************************************************/
void WIFIloop()
{
  if (--time_check_wifi_connection <= 0)
  {
    time_check_wifi_connection = TIME_CHECK_WI_FI_CONNECTION * 1000;
    if (AP_open == true)
    {
      if (--time_reset_device > 0)
      {
       //Serial.print("AP mode. Reset device after ");
       //Serial.print(time_reset_device * TIME_CHECK_WI_FI_CONNECTION);
       //Serial.println(" sesconds");
      }
      else
      {
        time_reset_device = 0;
        //Serial.println("Reset device");
        ESP.reset();
      }
    }
    else
    {
      if (WiFi.status() != WL_CONNECTED)
      {
        if (--time_reset_device <= 0)
        {
          //Serial.println("Lost connection to WIFI");
          time_reset_device = TIME_LOST_CONNECTION_WIFI;
          //Serial.println("Reset device");
          ESP.reset();
        }
      }
      else
      {
        time_reset_device = TIME_LOST_CONNECTION_WIFI;
      }
    }
  }
}


