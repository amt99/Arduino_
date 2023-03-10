/*
This program controls a sequence of four LEDs connected to pins 2-5 of an Arduino board.
The LEDs light up one at a time in a sequential pattern and then turn off in reverse order.
The delay between each LED turning on and off is set to 100 milliseconds.
The sequence then repeats continuously.
*/
// Define the pins for each LED
int LED_1 = 2;      // Define pin 2 as LED_1
int LED_2 = 3;      // Define pin 3 as LED_2
int LED_3 = 4;      // Define pin 4 as LED_3
int LED_4 = 5;      // Define pin 5 as LED_4

void setup() {

  // Set the LED pins as output
  pinMode(LED_1, OUTPUT);   // Set LED_1 as an output
  pinMode(LED_2, OUTPUT);   // Set LED_2 as an output
  pinMode(LED_3, OUTPUT);   // Set LED_3 as an output
  pinMode(LED_4, OUTPUT);   // Set LED_4 as an output
}

void loop() {
  // Turn on the first LED
  digitalWrite(LED_1, HIGH); // Turn on LED_1
  delay(100);                // Wait for 100 milliseconds

  // Turn off the first LED and turn on the second
  digitalWrite(LED_1, LOW);  // Turn off LED_1
  digitalWrite(LED_2, HIGH); // Turn on LED_2
  delay(100);                // Wait for 100 milliseconds

  // Turn off the second LED and turn on the third
  digitalWrite(LED_2, LOW);  // Turn off LED_2
  digitalWrite(LED_3, HIGH); // Turn on LED_3
  delay(100);                // Wait for 100 milliseconds

  // Turn off the third LED and turn on the fourth
  digitalWrite(LED_3, LOW);  // Turn off LED_3
  digitalWrite(LED_4, HIGH); // Turn on LED_4
  delay(100);                // Wait for 100 milliseconds

  // Turn off the fourth LED and turn on the third
  digitalWrite(LED_4, LOW);  // Turn off LED_4
  digitalWrite(LED_3, HIGH); // Turn on LED_3
  delay(100);                // Wait for 100 milliseconds

  // Turn off the third LED and turn on the second
  digitalWrite(LED_3, LOW);  // Turn off LED_3
  digitalWrite(LED_2, HIGH); // Turn on LED_2
  delay(100);                // Wait for 100 milliseconds

  // Turn off the second LED and turn on the first
  digitalWrite(LED_2, LOW);  // Turn off LED_2
  digitalWrite(LED_1, HIGH); // Turn on LED_1
  delay(100);                // Wait for 100 milliseconds

  // Turn off the first LED and start the sequence over
  digitalWrite(LED_1, LOW);  // Turn off LED_1
}
