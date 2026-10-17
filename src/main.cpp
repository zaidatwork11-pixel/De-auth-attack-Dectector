
#include <Arduino.h>

const int LED_PIN = 2;

void setup()
{
    pinMode(LED_PIN, OUTPUT);
    digitalWrite(LED_PIN, LOW);

    Serial.begin(115200);
    Serial.println("Enter 1 for ON, 0 for OFF");
}


void loop()
{
    if (Serial.available() > 0)
    {
        char current = Serial.read();

        if (current == '1')
        {
            digitalWrite(LED_PIN, HIGH);
            Serial.println("LED ON");
        }
        else if (current == '0')
        {
            digitalWrite(LED_PIN, LOW);
            Serial.println("LED OFF");
        }
    }
}
