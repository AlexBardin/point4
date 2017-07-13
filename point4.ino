#include <ESP8266WiFi.h>        //Содержится в пакете. Видео с уроком http://esp8266-arduinoide.ru/step1-wifi
#include <ESP8266WebServer.h>   //Содержится в пакете. Видео с уроком http://esp8266-arduinoide.ru/step2-webserver
#include <ESP8266SSDP.h>        //Содержится в пакете. Видео с уроком http://esp8266-arduinoide.ru/step3-ssdp
#include <FS.h>                 //Содержится в пакете. Видео с уроком http://esp8266-arduinoide.ru/step4-fswebserver
//                    ПЕРЕДАЧА ДАННЫХ НА WEB СТРАНИЦУ. Видео с уроком http://esp8266-arduinoide.ru/step5-datapages/
//                    ПЕРЕДАЧА ДАННЫХ С WEB СТРАНИЦЫ.  Видео с уроком http://esp8266-arduinoide.ru/step6-datasend/
#include <ArduinoJson.h>        //Установить из менеджера библиотек.
//                    ЗАПИСЬ И ЧТЕНИЕ ПАРАМЕТРОВ КОНФИГУРАЦИИ В ФАЙЛ. Видео с уроком http://esp8266-arduinoide.ru/step7-fileconfig/
#include <ESP8266HTTPUpdateServer.h>  //Содержится в пакете.
//#include <WiFiManager.h>          //https://github.com/tzapu/WiFiManager
#include <Adafruit_NeoPixel.h>       //

// Web интерфейс для устройства
ESP8266WebServer HTTP;

//WiFiManager wifiManager;

// Определяем переменные wifi
String _ssid     = "123"; // Для хранения SSID
String _password = "123123123"; // Для хранения пароля сети
String _ssidAP = "pointWiFi";   // SSID AP точки доступа
String _passwordAP = ""; // пароль точки доступа
String SSDP_Name = "point"; // Имя SSDP
String _hide_net = "";
String _set_ip_manual = "false";
String _gateway = "192.168.4.1" ;
String _mask = "255.255.255.0" ;
String _ip_device = "192.168.4.1" ;

String jsonConfig = "{}";
int port = 80;

// Сервер для управления светодиодами
WiFiServer server(100);

void setup() {


  
  
  HTTP = ESP8266WebServer (port);
//  Serial.begin(74880);
 ////Serial.println("");
  //Запускаем файловую систему
  //Serial.println("Start File Systems");
  FS_init();
  //Serial.println("Load FileConfig");
  loadConfig();
  //Запускаем WIFI
  //Serial.println("Start WIFI");
  WIFIinit();
  //Настраиваем и запускаем SSDP интерфейс
  //Serial.println("Start SSDP");
  SSDP_init();
  //Настраиваем и запускаем HTTP интерфейс
  //Serial.println("Start WebServer");
  HTTP_init();

  // Инициализация RGB, запуск сервера  //////////////////////////
  RGB_setup();
  server.begin();
//  clear_leds();
 
}

void loop() {
  HTTP.handleClient();
  WIFIloop();
  Wifi_serv();

  delay(1);
}



