#include <ESP8266WiFi.h>
#include <DNSServer.h>
#include <ESP8266WebServer.h>
#include "kitty.h"
#include <SSD1306Wire.h>

SSD1306Wire  display(0x3c, D1, D2);

#ifdef ESP8266
extern "C" {
#include "user_interface.h"
}
#endif


const byte DNS_PORT = 53;
IPAddress apIP(192, 168, 1, 1);
DNSServer dnsServer;
ESP8266WebServer webServer(80);

String responseHTML = HTML_HEADER HTML_KITTY1 HTML_FOOTER;

int num_connected = 0;

void wifi_event_handler_cb(System_Event_t * event) {

  switch (event->event) {
    case EVENT_STAMODE_CONNECTED:
      break;
    case EVENT_STAMODE_DISCONNECTED:
      break;
    case EVENT_STAMODE_AUTHMODE_CHANGE:
      break;
    case EVENT_STAMODE_GOT_IP:
      break;
    case EVENT_SOFTAPMODE_STACONNECTED:
      num_connected++;
      break;
    case EVENT_SOFTAPMODE_STADISCONNECTED:
      num_connected--;
      break;
  }

}



void setup() {

  display.init();
  display.flipScreenVertically();
  display.setFont(ArialMT_Plain_10);
  
  WiFi.mode(WIFI_AP);
  WiFi.softAPConfig(apIP, apIP, IPAddress(255, 255, 255, 0));
  WiFi.softAP("=^.^= Hello Kitty =^.^=", NULL, 1, 0, 20);

  // if DNSServer is started with "*" for domain name, it will reply with
  // provided IP to all DNS request
  dnsServer.start(DNS_PORT, "*", apIP);

  // set_event_handler_cb_stream(Serial);
  wifi_set_event_handler_cb(wifi_event_handler_cb);


  // replay to all requests with same HTML
  webServer.onNotFound([]() {
    webServer.send(200, "text/html", responseHTML);
  });
  webServer.begin();

  display.drawString(0,0,"Wifi Init Done");
  display.display();
}

void refresh_display(){
  display.clear();
  String output("Num connected: ");
  String val(num_connected);
  display.drawString(0, 0, output + val);
  display.display();
}

void loop() {
  dnsServer.processNextRequest();
  webServer.handleClient();
  refresh_display();
}
