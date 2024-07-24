#include <Arduino.h>
#include <helloESP32.h>

void setup()
{

  Serial.begin(115200);

  helloEsp32();
}

void loop()
{

  delay(1);
}

