/*
This program defines the pins for each color of an RGB LED and sets them as output pins.
It then turns on each color of the LED (red, green, and blue) one at a time and waits for 
100 milliseconds between each change.
This creates a simple color cycle effect where the LED changes color every 100 milliseconds.
The program runs in an infinite loop and continues the color cycle until the power is turned 
off or the program is stopped.
*/
// Define the pins for each color of the RGB LED
int RED_PIN = 2;    // Define pin 2 as RED_PIN
int GREEN_PIN = 3;  // Define pin 3 as GREEN_PIN
int BLUE_PIN = 4;   // Define pin 4 as BLUE_PIN

void setup() {
  // Set the RGB LED pins as output
  pinMode(RED_PIN, OUTPUT);    // Set RED_PIN as an output
  pinMode(GREEN_PIN, OUTPUT);  // Set GREEN_PIN as an output
  pinMode(BLUE_PIN, OUTPUT);   // Set BLUE_PIN as an output
}

void loop() {
  //Red pin turns on
  digitalWrite(RED_PIN, HIGH);    // Turn on the RED_PIN
  digitalWrite(GREEN_PIN, LOW);   // Turn off the GREEN_PIN
  digitalWrite(BLUE_PIN, LOW);    // Turn off the BLUE_PIN
  delay(100);                     // Wait for 100 milliseconds
  
  //Green pin turns on
  digitalWrite(RED_PIN, LOW);    // Turn off the RED_PIN
  digitalWrite(GREEN_PIN, HIGH);  // Turn on the GREEN_PIN
  digitalWrite(BLUE_PIN, LOW);    // Turn off the BLUE_PIN
  delay(100);                     // Wait for 100 milliseconds

  //Blue pin turns on
  digitalWrite(RED_PIN, LOW);    // Turn off the RED_PIN
  digitalWrite(GREEN_PIN, LOW);  // Turn off the GREEN_PIN
  digitalWrite(BLUE_PIN, HIGH);  // Turn on the BLUE_PIN
  delay(100);                     // Wait for 100 milliseconds

}
