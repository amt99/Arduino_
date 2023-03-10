/*
This is a program for Arduino that controls an RGB LED and a push button.
The program turns on the red LED, green LED, or blue LED based on the state of the push button.
The pins for the RGB LED and push button are defined in the code.
*/
// Define the RGB pins and PB pin
 int redPin = 2;    // define the pin number for the red LED
 int greenPin = 3; // define the pin number for the green LED
 int bluePin = 4;  // define the pin number for the blue LED
 int buttonPin = 5; // define the pin number for the push-button

void setup() {
  pinMode(redPin, OUTPUT);     // set the red LED pin as output
  pinMode(greenPin, OUTPUT);   // set the green LED pin as output
  pinMode(bluePin, OUTPUT);    // set the blue LED pin as output
  pinMode(buttonPin, INPUT_PULLUP); // set the button pin as input with internal pull-up resistor enabled
}

void loop() {
  int buttonState = digitalRead(buttonPin); // read the state of the button
  
  // turn on the red LED if the button is not pressed, and turn it off if the button is pressed
  digitalWrite(redPin, HIGH);
  
  // turn on the green LED
  digitalWrite(greenPin, !buttonState);
  
  // turn on the blue LED if the button is pressed, and turn it off if the button is not pressed
  digitalWrite(bluePin, buttonState);
}
