// Define the pin for the onboard LED (usually GPIO2 or GPIO1 depending on the board)
#define LED_PIN 2  // Try 1 if 2 doesn't work

void setup() {
  pinMode(LED_PIN, OUTPUT); // Set LED pin as output
}

void loop() {
  digitalWrite(LED_PIN, LOW);  // Turn LED on (LOW is ON for ESP8266)
  delay(1000);                 // Wait for 1 second
  digitalWrite(LED_PIN, HIGH); // Turn LED off
  delay(1000);                 // Wait for 1 second
}
