String prepareHtmlPage()
{
  String htmlPage =
     String("HTTP/1.1 200 OK\r\n") +
            "Content-Type: text/html\r\n" +
            "Connection: close\r\n" +  // the connection will be closed after completion of the response
            "Refresh: 5\r\n" +  // refresh the page automatically every 5 sec
            "\r\n" +
            "<!DOCTYPE HTML>" +
            "<html>" +
            "Analog input:  " + String(analogRead(A0)) +
            "</html>" +
            "\r\n";
  return htmlPage;
}


void Wifi_serv()
{
  WiFiClient client = server.available();
  client.setTimeout(100);
  // wait for a client (web browser) to connect
  if (client)
  {
    //Serial.println("\n[Client connected]");
    while (client.connected())
    {
      // read line by line what the client (web browser) is requesting
      if (client.available())
      {

        byte line[200];
        int n_line = (client.readBytes(line, 200));

        // выдадем строку в отладчик
        for (int i = 0; i < n_line; i++)
        {
          //Serial.print(line[i]);
        }
        // wait for end of client's request, that is marked with an empty line
        // Проверяем принятый пакет
        if (!n_line)
        {
          //Serial.println("Err 1 - пакет с нулевой длиной");
          client.println("Err 1 - пакет с нулевой длиной");
          return;
        }
        if (n_line % 10)
        {
          //Serial.println("Err 2 - неверная длина пакета");
          client.println("Err 2 - неверная длина пакета");
          return;
        }
        // Остальные проверки потом


        if (n_line)
        {
          //Serial.println("[Пишем]");
          set_color(line, n_line);
          client.println(prepareHtmlPage());
          break;
        }
      }
    }
    delay(1); // give the web browser time to receive the data

    // close the connection:
    client.stop();
    //Serial.println("[Client disonnected]");
  }
}

