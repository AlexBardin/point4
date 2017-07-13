//#define PIN1 2
//#define PIN2 2

#define NUM_LEDS 100
#define BRIGHTNESS 255

// Выводы по микросхемам
#define port0 5
#define port2 14
#define port3 13
#define port4 12

#define port1 15


// Ноги для управления демультиплексорами
#define adr0  2
#define adr1  0
#define adr2  4

//#define strip_set(a,b,c,d,e,f)   (strip##a.setPixelColor(b, c, d, e, f)


Adafruit_NeoPixel strip00 = Adafruit_NeoPixel(NUM_LEDS, port0, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip01 = Adafruit_NeoPixel(NUM_LEDS, port0, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip02 = Adafruit_NeoPixel(NUM_LEDS, port0, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip03 = Adafruit_NeoPixel(NUM_LEDS, port0, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip04 = Adafruit_NeoPixel(NUM_LEDS, port0, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip05 = Adafruit_NeoPixel(NUM_LEDS, port0, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip06 = Adafruit_NeoPixel(NUM_LEDS, port0, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip07 = Adafruit_NeoPixel(NUM_LEDS, port0, NEO_GRB + NEO_KHZ400);    // 

Adafruit_NeoPixel strip10 = Adafruit_NeoPixel(NUM_LEDS, port1, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip11 = Adafruit_NeoPixel(NUM_LEDS, port1, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip12 = Adafruit_NeoPixel(NUM_LEDS, port1, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip13 = Adafruit_NeoPixel(NUM_LEDS, port1, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip14 = Adafruit_NeoPixel(NUM_LEDS, port1, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip15 = Adafruit_NeoPixel(NUM_LEDS, port1, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip16 = Adafruit_NeoPixel(NUM_LEDS, port1, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip17 = Adafruit_NeoPixel(NUM_LEDS, port1, NEO_GRB + NEO_KHZ400);    // 

Adafruit_NeoPixel strip20 = Adafruit_NeoPixel(NUM_LEDS, port2, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip21 = Adafruit_NeoPixel(NUM_LEDS, port2, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip22 = Adafruit_NeoPixel(NUM_LEDS, port2, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip23 = Adafruit_NeoPixel(NUM_LEDS, port2, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip24 = Adafruit_NeoPixel(NUM_LEDS, port2, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip25 = Adafruit_NeoPixel(NUM_LEDS, port2, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip26 = Adafruit_NeoPixel(NUM_LEDS, port2, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip27 = Adafruit_NeoPixel(NUM_LEDS, port2, NEO_GRB + NEO_KHZ400);    // 

Adafruit_NeoPixel strip30 = Adafruit_NeoPixel(NUM_LEDS, port3, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip31 = Adafruit_NeoPixel(NUM_LEDS, port3, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip32 = Adafruit_NeoPixel(NUM_LEDS, port3, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip33 = Adafruit_NeoPixel(NUM_LEDS, port3, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip34 = Adafruit_NeoPixel(NUM_LEDS, port3, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip35 = Adafruit_NeoPixel(NUM_LEDS, port3, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip36 = Adafruit_NeoPixel(NUM_LEDS, port3, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip37 = Adafruit_NeoPixel(NUM_LEDS, port3, NEO_GRB + NEO_KHZ400);    // 

Adafruit_NeoPixel strip40 = Adafruit_NeoPixel(NUM_LEDS, port4, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip41 = Adafruit_NeoPixel(NUM_LEDS, port4, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip42 = Adafruit_NeoPixel(NUM_LEDS, port4, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip43 = Adafruit_NeoPixel(NUM_LEDS, port4, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip44 = Adafruit_NeoPixel(NUM_LEDS, port4, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip45 = Adafruit_NeoPixel(NUM_LEDS, port4, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip46 = Adafruit_NeoPixel(NUM_LEDS, port4, NEO_GRB + NEO_KHZ400);    // 
Adafruit_NeoPixel strip47 = Adafruit_NeoPixel(NUM_LEDS, port4, NEO_GRB + NEO_KHZ400);    // 




void out_port(int temp)
{
      temp%=8;
      // Выставляем нужный адрес демультиплексора
      if (temp&1) {
        digitalWrite(adr0, 1);
        ////Serial.println("port1 -> 1");         
      }
      else{
        digitalWrite(adr0, 0);
        ////Serial.println("port1 -> 0");         

      }
      if (temp&(1<<1)) {
        digitalWrite(adr1, 1);
        ////Serial.println("port2 -> 1");         
      }
      else{
        digitalWrite(adr1, 0);
        ////Serial.println("port2 -> 0");         
      }
      if (temp&(1<<2)){
        digitalWrite(adr2, 1);
        ////Serial.println("port3 -> 1");         
      }
      else{
        digitalWrite(adr2, 0);
        ////Serial.println("port3 -> 0");         
      }
}


void RGB_setup() {
   
 // Инициализация выводов для переключения адресов демультиплексоров 
  pinMode(adr0, OUTPUT);
  pinMode(adr1, OUTPUT);
  pinMode(adr2, OUTPUT);
  
  
  out_port(0);
  strip00.setBrightness(BRIGHTNESS);
  strip00.begin();
  strip00.show(); // Initialize all pixels to 'off'
  strip10.setBrightness(BRIGHTNESS);
  strip10.begin();
  strip10.show(); // Initialize all pixels to 'off'
  strip20.setBrightness(BRIGHTNESS);
  strip20.begin();
  strip20.show(); // Initialize all pixels to 'off'
  strip30.setBrightness(BRIGHTNESS);
  strip30.begin();
  strip30.show(); // Initialize all pixels to 'off'
  strip40.setBrightness(BRIGHTNESS);
  strip40.begin();
  strip40.show(); // Initialize all pixels to 'off'

  out_port(1);
  strip01.setBrightness(BRIGHTNESS);
  strip01.begin();
  strip01.show(); // Initialize all pixels to 'off'
  strip11.setBrightness(BRIGHTNESS);
  strip11.begin();
  strip11.show(); // Initialize all pixels to 'off'
  strip21.setBrightness(BRIGHTNESS);
  strip21.begin();
  strip21.show(); // Initialize all pixels to 'off'
  strip31.setBrightness(BRIGHTNESS);
  strip31.begin();
  strip31.show(); // Initialize all pixels to 'off'
  strip41.setBrightness(BRIGHTNESS);
  strip41.begin();
  strip41.show(); // Initialize all pixels to 'off'

  out_port(2);
  strip02.setBrightness(BRIGHTNESS);
  strip02.begin();
  strip02.show(); // Initialize all pixels to 'off'
  strip12.setBrightness(BRIGHTNESS);
  strip12.begin();
  strip12.show(); // Initialize all pixels to 'off'
  strip22.setBrightness(BRIGHTNESS);
  strip22.begin();
  strip22.show(); // Initialize all pixels to 'off'
  strip32.setBrightness(BRIGHTNESS);
  strip32.begin();
  strip32.show(); // Initialize all pixels to 'off'
  strip42.setBrightness(BRIGHTNESS);
  strip42.begin();
  strip42.show(); // Initialize all pixels to 'off'

  out_port(3);
  strip03.setBrightness(BRIGHTNESS);
  strip03.begin();
  strip03.show(); // Initialize all pixels to 'off'
  strip13.setBrightness(BRIGHTNESS);
  strip13.begin();
  strip13.show(); // Initialize all pixels to 'off'
  strip23.setBrightness(BRIGHTNESS);
  strip23.begin();
  strip23.show(); // Initialize all pixels to 'off'
  strip33.setBrightness(BRIGHTNESS);
  strip33.begin();
  strip33.show(); // Initialize all pixels to 'off'
  strip43.setBrightness(BRIGHTNESS);
  strip43.begin();
  strip43.show(); // Initialize all pixels to 'off'

  out_port(4);
  strip04.setBrightness(BRIGHTNESS);
  strip04.begin();
  strip04.show(); // Initialize all pixels to 'off'
  strip14.setBrightness(BRIGHTNESS);
  strip14.begin();
  strip14.show(); // Initialize all pixels to 'off'
  strip24.setBrightness(BRIGHTNESS);
  strip24.begin();
  strip24.show(); // Initialize all pixels to 'off'
  strip34.setBrightness(BRIGHTNESS);
  strip34.begin();
  strip34.show(); // Initialize all pixels to 'off'
  strip44.setBrightness(BRIGHTNESS);
  strip44.begin();
  strip44.show(); // Initialize all pixels to 'off'

  out_port(5);
  strip05.setBrightness(BRIGHTNESS);
  strip05.begin();
  strip05.show(); // Initialize all pixels to 'off'
  strip15.setBrightness(BRIGHTNESS);
  strip15.begin();
  strip15.show(); // Initialize all pixels to 'off'
  strip25.setBrightness(BRIGHTNESS);
  strip25.begin();
  strip25.show(); // Initialize all pixels to 'off'
  strip35.setBrightness(BRIGHTNESS);
  strip35.begin();
  strip35.show(); // Initialize all pixels to 'off'
  strip45.setBrightness(BRIGHTNESS);
  strip45.begin();
  strip45.show(); // Initialize all pixels to 'off'

  out_port(6);
  strip06.setBrightness(BRIGHTNESS);
  strip06.begin();
  strip06.show(); // Initialize all pixels to 'off'
  strip16.setBrightness(BRIGHTNESS);
  strip16.begin();
  strip16.show(); // Initialize all pixels to 'off'
  strip26.setBrightness(BRIGHTNESS);
  strip26.begin();
  strip26.show(); // Initialize all pixels to 'off'
  strip36.setBrightness(BRIGHTNESS);
  strip36.begin();
  strip36.show(); // Initialize all pixels to 'off'
  strip46.setBrightness(BRIGHTNESS);
  strip46.begin();
  strip46.show(); // Initialize all pixels to 'off'

  out_port(7);
  strip07.setBrightness(BRIGHTNESS);
  strip07.begin();
  strip07.show(); // Initialize all pixels to 'off'
  strip17.setBrightness(BRIGHTNESS);
  strip17.begin();
  strip17.show(); // Initialize all pixels to 'off'
  strip27.setBrightness(BRIGHTNESS);
  strip27.begin();
  strip27.show(); // Initialize all pixels to 'off'
  strip37.setBrightness(BRIGHTNESS);
  strip37.begin();
  strip37.show(); // Initialize all pixels to 'off'
  strip47.setBrightness(BRIGHTNESS);
  strip47.begin();
  strip47.show(); // Initialize all pixels to 'off'

  clear_all();
}


// Разбираем строку и засвечиваем сегменты
void set_color(byte* line, int n_line) {
       // разбираем пакет
        for(int i=0; i<(n_line/10); i++)
        {
            ////Serial.println("test1");
              int n_port = line[i*10];
              int led_addr = (line[i*10+1]<<8)|(line[i*10+2]); // носмер первого светолиода в пакете
              ////Serial.println("led_addr ");
          ////Serial.println(String(led_addr));
              int led_quality = (line[i*10+3]<<8)|(line[i*10+4]); // количество диодов
              ////Serial.println("led_qua ");
              ////Serial.println(String(led_quality));
              int R_color = line[i*10+5]; // яркость красного цвета
              ////Serial.println("R_color ");
              ////Serial.println(String(R_color));
              int G_color = line[i*10+6]; // яркость зеленого цвета
              ////Serial.println("G_color ");
              ////Serial.println(String(G_color));
              int B_color = line[i*10+7]; // яркость синего цвета
              // ////Serial.println("B_color ");
              ////Serial.println(String(B_color));
              int W_color = line[i*10+8]; // яркость белого цвета
              ////Serial.println("W_color ");
              ////Serial.println(String(W_color));
              // Засвечиваем нужные светодиоды
  


              // Теперь выводим данные в нужный порт


              switch(n_port)
                {
              case 0:    
                ////Serial.println("test2");
                out_port(0);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip00.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("Out line 0"); 
                strip00.show();                
                break;

              case 1:    
                ////Serial.println("test2");
                out_port(1);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip01.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("Out line 1"); 
                strip01.show();                
                break;
              
              case 2:    
                ////Serial.println("test2");
                out_port(2);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip02.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("Out line 2"); 
                strip02.show();                
                break;

              case 3:    
                ////Serial.println("test2");
                out_port(3);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip03.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                //////Serial.println("Out line 3"); 
                strip03.show();                
                break;

              case 4:    
                ////Serial.println("test2");
                out_port(4);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip04.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("Out line 4"); 
                strip04.show();                
                break;

              case 5:    
                ////Serial.println("test2");
                out_port(5);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip05.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                strip05.show();                
                break;

              case 6:    
                ////Serial.println("test2");
                out_port(6);                
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip06.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                strip06.show();                
                break;

              case 7:    
                ////Serial.println("test2");
                out_port(7);                
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip07.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                strip07.show();                
                break;

              case 8:    
                ///Serial.println("test2");
                out_port(0);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip20.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                strip20.show();                
                break;

              case 9:    
                ////Serial.println("test2");
                out_port(1);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip21.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                strip21.show();                
                break;

              case 10:    
                ////Serial.println("test2");
                out_port(2);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip22.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                strip22.show();                
                break;

              case 11:    
                ////Serial.println("test2");
                out_port(3);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip23.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                strip23.show();                
                break;
                
              case 12:    
                ////Serial.println("test2");
                out_port(0);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip10.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                strip10.show();                
                break;

              case 13:    
                ////Serial.println("test2");
                out_port(1);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip11.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                strip11.show();                
                break;

              case 14:    
                ////Serial.println("test2");
                out_port(2);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip12.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                  
                strip12.show();                
                break;

              case 15:    
                ////Serial.println("test2");
                out_port(3);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip13.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                strip13.show();                
                break;
                
              case 16:    
                ////Serial.println("test2");
                out_port(4);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip14.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                strip14.show();                
                break;
              
              case 17:    
                ////Serial.println("test2");
                out_port(5);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip15.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                strip15.show();                
                break;

              case 18:    
                ////Serial.println("test2");
                out_port(6);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip16.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                strip16.show();                
                break;

              case 19:    
                ////Serial.println("test2");
                out_port(7);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip17.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                strip17.show();                
                break;

              case 20:    
                ////Serial.println("test2");
                out_port(0);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip30.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                strip30.show();                
                break;

              case 21:    
                ////Serial.println("test2");
                out_port(1);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip31.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                strip31.show();                
                break;

              case 22:    
                ////Serial.println("test2");
                out_port(2);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip32.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                strip32.show();                
                break;

              case 23:    
                ////Serial.println("test2");
                out_port(3);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip33.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                strip33.show();                
                break;

              case 24:    
                ////Serial.println("test2");
                out_port(4);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip34.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                strip34.show();                
                break;

              case 25:    
                ////Serial.println("test2");
                out_port(5);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip35.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                  
                strip35.show();                
                break;

              case 26:    
                ////Serial.println("test2");
                out_port(6);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip36.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                strip36.show();                
                break;

              case 27:    
                ////Serial.println("test2");
                out_port(7);                
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip37.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                  
                strip37.show();                
                break;

              case 28:    
                ////Serial.println("test2");
                out_port(4);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip24.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                  
                strip24.show();                
                break;

              case 29:    
                ////Serial.println("test2");
                out_port(5);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip25.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                  
                strip25.show();                
                break;

              case 30:    
                ////Serial.println("test2");
                out_port(6);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip26.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                  
                strip26.show();                
                break;

              case 31:    
                //Serial.println("test2");
                out_port(7);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip27.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                  
                strip27.show();                
                break;

              case 32:    
                ////Serial.println("test2");
                out_port(0);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip40.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                strip40.show();                
                break;
                
              case 33:    
                ////Serial.println("test2");
                out_port(1);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip41.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                strip41.show();                
                break;
                
              case 34:    
                ////Serial.println("test2");
                out_port(2);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip42.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                strip42.show();                
                break;
                
              case 35:    
                ////Serial.println("test2");
                out_port(3);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip43.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                  
                strip43.show();                
                break;
                
              case 36:    
                ////Serial.println("test2");
                out_port(4);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip44.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                strip44.show();                
                break;
                
              case 37:    
                ////Serial.println("test2");
                out_port(5);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip45.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                strip45.show();                
                break;

              case 38:    
                ////Serial.println("test2");
                out_port(6);
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip46.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                strip46.show();                
                break;
                
              case 39:    
                ////Serial.println("test2");
                out_port(7);                
                for(int j = 0; j<led_quality; j++)
                {
                      // В какой порт писать
                          strip47.setPixelColor(led_addr+j, R_color, G_color, B_color, W_color);
                }
                ////Serial.println("test3"); 
                strip47.show();                
                break;
          
              case 40:    
                clear_all();
                break;

              default:
                          break;    

              }
        }
        
        
 
 
 // for(uint16_t i=0; i<strip.numPixels(); i++) {
//  }
}

void clear_all(void)
{
            
            for(int j = 0; j<NUM_LEDS; j++)
            {
                  // В какой порт писать
                      strip00.setPixelColor(j, 0, 0, 0, 0);
                      strip01.setPixelColor(j, 0, 0, 0, 0);
                      strip02.setPixelColor(j, 0, 0, 0, 0);
                      strip03.setPixelColor(j, 0, 0, 0, 0);
                      strip04.setPixelColor(j, 0, 0, 0, 0);
                      strip05.setPixelColor(j, 0, 0, 0, 0);
                      strip06.setPixelColor(j, 0, 0, 0, 0);
                      strip07.setPixelColor(j, 0, 0, 0, 0);
                      strip10.setPixelColor(j, 0, 0, 0, 0);
                      strip11.setPixelColor(j, 0, 0, 0, 0);
                      strip12.setPixelColor(j, 0, 0, 0, 0);
                      strip13.setPixelColor(j, 0, 0, 0, 0);
                      strip14.setPixelColor(j, 0, 0, 0, 0);
                      strip15.setPixelColor(j, 0, 0, 0, 0);
                      strip16.setPixelColor(j, 0, 0, 0, 0);
                      strip17.setPixelColor(j, 0, 0, 0, 0);
                      strip20.setPixelColor(j, 0, 0, 0, 0);
                      strip21.setPixelColor(j, 0, 0, 0, 0);
                      strip22.setPixelColor(j, 0, 0, 0, 0);
                      strip23.setPixelColor(j, 0, 0, 0, 0);
                      strip24.setPixelColor(j, 0, 0, 0, 0);
                      strip25.setPixelColor(j, 0, 0, 0, 0);
                      strip26.setPixelColor(j, 0, 0, 0, 0);
                      strip27.setPixelColor(j, 0, 0, 0, 0);
                      strip30.setPixelColor(j, 0, 0, 0, 0);
                      strip31.setPixelColor(j, 0, 0, 0, 0);
                      strip32.setPixelColor(j, 0, 0, 0, 0);
                      strip33.setPixelColor(j, 0, 0, 0, 0);
                      strip34.setPixelColor(j, 0, 0, 0, 0);
                      strip35.setPixelColor(j, 0, 0, 0, 0);
                      strip36.setPixelColor(j, 0, 0, 0, 0);
                      strip37.setPixelColor(j, 0, 0, 0, 0);
                      strip40.setPixelColor(j, 0, 0, 0, 0);
                      strip41.setPixelColor(j, 0, 0, 0, 0);
                      strip42.setPixelColor(j, 0, 0, 0, 0);
                      strip43.setPixelColor(j, 0, 0, 0, 0);
                      strip44.setPixelColor(j, 0, 0, 0, 0);
                      strip45.setPixelColor(j, 0, 0, 0, 0);
                      strip46.setPixelColor(j, 0, 0, 0, 0);
                      strip47.setPixelColor(j, 0, 0, 0, 0);
            }
            out_port(0);
            strip00.show();
            strip10.show();
            strip20.show();
            strip30.show();
            strip40.show();
            
            out_port(1);
            strip01.show();
            strip11.show();
            strip21.show();
            strip31.show();
            strip41.show();

            out_port(2);
            strip02.show();
            strip12.show();
            strip22.show();
            strip32.show();
            strip42.show();

            out_port(3);
            strip03.show();
            strip13.show();
            strip23.show();
            strip33.show();
            strip43.show();

            out_port(4);
            strip04.show();
            strip14.show();
            strip24.show();
            strip34.show();
            strip44.show();
            
            out_port(5);
            strip05.show();
            strip15.show();
            strip25.show();
            strip35.show();
            strip45.show();

            out_port(6);
            strip06.show();
            strip16.show();
            strip26.show();
            strip36.show();
            strip46.show();

            out_port(7);
            strip07.show();
            strip17.show();
            strip27.show();
            strip37.show();
            strip47.show();

}

