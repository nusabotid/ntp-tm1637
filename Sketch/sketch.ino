#include <TM1637Display.h>
#include <NTPClient.h>
#include <WiFi.h>
#include <WiFiUdp.h>

const char *ssid     = "Wokwi-GUEST";
const char *password = "";

const char *ntpServer = "pool.ntp.org";
const long UTC_OFFSET  = 25200;

WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, ntpServer, UTC_OFFSET);
TM1637Display display = TM1637Display(18, 19);

void setup() {
  display.clear();
  display.setBrightness(7); // set the brightness to 7 (0:dimmest, 7:brightest)

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay (1000);
    display.showNumberDec(8888);
  }

  timeClient.begin();
}

void loop() {
  timeClient.update();
  String time = String(timeClient.getHours()) + String(timeClient.getMinutes());

  display.showNumberDecEx(time.toInt(), 0b01000000);
  delay(1000);
  display.clear();
}
