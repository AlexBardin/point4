// Загрузка данных сохраненных в файл  config.json
bool loadConfig() {
  // Открываем файл для чтения
  File configFile = SPIFFS.open("/config.json", "r");
  if (!configFile) {
    // если файл не найден
    //Serial.println("Failed to open config file");
    //  Создаем файл запиав в него аные по умолчанию
    saveConfig();
    configFile.close();
    return false;
  }
  // Проверяем размер файла, будем использовать файл размером меньше 1024 байта
  size_t size = configFile.size();
  if (size > 1024) {
    //Serial.println("Config file size is too large");
    configFile.close();
    return false;
  }

  // загружаем файл конфигурации в глобальную переменную
  jsonConfig = configFile.readString();
  configFile.close();
  // Резервируем памяь для json обекта буфер может рости по мере необходимти предпочтительно для ESP8266
  DynamicJsonBuffer jsonBuffer;
  //  вызовите парсер JSON через экземпляр jsonBuffer
  //  строку возьмем из глобальной переменной String jsonConfig
  JsonObject& root = jsonBuffer.parseObject(jsonConfig);
  //Serial.println("file config is loaded");
  for (JsonObject::iterator it = root.begin(); it != root.end(); ++it)
  {
    //Serial.print(it->key);
    //Serial.print(": ");
    //Serial.println(it->value.asString());
  }

  // Теперь можно получить значения из root
  _ssidAP = root["ssidAPName"].as<String>(); // Так получаем строку
  _passwordAP = root["ssidAPPassword"].as<String>();
  SSDP_Name = root["SSDPName"].as<String>();
  _ssid = root["ssidName"].as<String>();
  _password = root["ssidPassword"].as<String>();

  _hide_net = root["hide_net"].as<String>();
  _set_ip_manual = root["set_ip_manual"].as<String>();
  _gateway = root["gateway"].as<String>();
  _mask = root["mask"].as<String>();
  _ip_device = root["ip_device"].as<String>();

  return true;
}

// Запись данных в файл config.json
bool saveConfig() {
  // Резервируем память для json обекта буфер может рости по мере необходимти предпочтительно для ESP8266
  DynamicJsonBuffer jsonBuffer;
  //  вызовите парсер JSON через экземпляр jsonBuffer
  JsonObject& json = jsonBuffer.parseObject(jsonConfig);
  //Serial.println("save file config");
  for (JsonObject::iterator it = json.begin(); it != json.end(); ++it)
  {
    //Serial.println(it->key);
    //Serial.println(it->value.asString());
  }

  // Заполняем поля json
  json["SSDPName"] = SSDP_Name;
  json["ssidAPName"] = _ssidAP;
  json["ssidAPPassword"] = _passwordAP;
  json["ssidName"] = _ssid;
  json["ssidPassword"] = _password;

  json["set_ip_manual"] = _set_ip_manual;
  json["gateway"] = _gateway;
  json["mask"] = _mask;
  json["ip_device"] = _ip_device;
  json["hide_net"] = _hide_net;

  // Помещаем созданный json в глобальную переменную json.printTo(jsonConfig);
  json.printTo(jsonConfig);
  // Открываем файл для записи
  File configFile = SPIFFS.open("/config.json", "w");
  if (!configFile) {
    ////Serial.println("Failed to open config file for writing");
    configFile.close();
    return false;
  }
  // Записываем строку json в файл
  json.printTo(configFile);
  configFile.close();
  return true;
}




