#include <Arduino.h>

const int LED_PIN = 2;

void setup()
{
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200);
  Serial.println("Deauth Dectector initialized");
}

void loop()
{
  // TODO 2: Turn the LED ON
  digitalWrite(LED_PIN, HIGH);

    // TODO 3: Wait for 1000 milliseconds
  delay(1000);
    // TODO 4: Turn the LED OFF
  digitalWrite(LED_PIN, LOW);
    // TODO 5: Wait for another 1000 milliseconds
  delay(1000);
  Serial.println("heleloooooo");
}
