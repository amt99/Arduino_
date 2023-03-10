/*
control four LEDs connected to digital pins 2, 3, 4, and 5.
The program turns on the first LED, waits for 100 milliseconds, turns it off, and turns on the second LED.
This process continues with the third and fourth LEDs in sequence, and then the sequence repeats.
This is a simple example of how to use digital output and delay functions to control multiple
 LEDs in sequence in Arduino programming.
*/
// Define the pins for each LED
int LED_1 = 2; // Pin number for LED 1
int LED_2 = 3; // Pin number for LED 2
int LED_3 = 4; // Pin number for LED 3
int LED_4 = 5; // Pin number for LED 4

void setup() {
  // Set the LED pins as output
  pinMode(LED_1, OUTPUT); // Set LED 1 pin as output
  pinMode(LED_2, OUTPUT); // Set LED 2 pin as output
  pinMode(LED_3, OUTPUT); // Set LED 3 pin as output
  pinMode(LED_4, OUTPUT); // Set LED 4 pin as output
}

void loop() {
  // Turn on the first LED
  digitalWrite(LED_1, HIGH); // Turn on LED 1
  delay(100); // Wait for 100 milliseconds
  
  // Turn off the first LED and turn on the second
  digitalWrite(LED_1, LOW); // Turn off LED 1
  digitalWrite(LED_2, HIGH); // Turn on LED 2
  delay(100); // Wait for 100 milliseconds

  // Turn off the second LED and turn on the third
  digitalWrite(LED_2, LOW); // Turn off LED 2
  digitalWrite(LED_3, HIGH); // Turn on LED 3
  delay(100); // Wait for 100 milliseconds

  // Turn off the third LED and turn on the fourth
  digitalWrite(LED_3, LOW); // Turn off LED 3
  digitalWrite(LED_4, HIGH); // Turn on LED 4
  delay(100); // Wait for 100 milliseconds

  // Turn off the fourth LED and start the sequence over
  digitalWrite(LED_4, LOW); // Turn off LED 4
}
