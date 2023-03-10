/*
This is a program for Arduino that controls an RGB LED and a push button.
The program turns on the RGB LED to white when the push button is not pressed and 
turns it off when the push button is pressed.
The pins for the RGB LED and push button are defined in the code.
*/
// Define the pins for each color of the RGB LED
int RED_PIN = 2; // Pin number for the red color of the RGB LED
int GREEN_PIN = 3; // Pin number for the green color of the RGB LED
int BLUE_PIN = 4; // Pin number for the blue color of the RGB LED

// Define the pin for the push button
int BUTTON_PIN = 5; // Pin number for the push button

void setup() {
  // Set the RGB LED pins as output
  pinMode(RED_PIN, OUTPUT); // Set the red color pin as output
  pinMode(GREEN_PIN, OUTPUT); // Set the green color pin as output
  pinMode(BLUE_PIN, OUTPUT); // Set the blue color pin as output

  // Set the push button pin as input with an internal pull-up resistor enabled
  pinMode(BUTTON_PIN, INPUT_PULLUP); 
}

void loop() {
  // Read the state of the push button
  int buttonState = digitalRead(BUTTON_PIN); 

  // If the push button is pressed (i.e., its state is LOW), turn off the RGB LED
  if (buttonState == LOW) {
    digitalWrite(RED_PIN, LOW); // Turn off the red color pin
    digitalWrite(GREEN_PIN, LOW); // Turn off the green color pin
    digitalWrite(BLUE_PIN, LOW); // Turn off the blue color pin
  } 
  // Otherwise, set the RGB LED to white
  else {
    digitalWrite(RED_PIN, HIGH); // Set the red color pin to HIGH (on)
    digitalWrite(GREEN_PIN, HIGH); // Set the green color pin to HIGH (on)
    digitalWrite(BLUE_PIN, HIGH); // Set the blue color pin to HIGH (on)
  }
}
