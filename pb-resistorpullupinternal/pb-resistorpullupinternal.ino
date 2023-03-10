/*
This program reads the state of a push button connected to pin 5 and prints it to the serial monitor.
The button pin is set as an input with the internal pull-up resistor enabled in the setup() function.
The loop() function continuously reads the state of the button using digitalRead()
and prints it to the serial monitor using Serial.println().
A short delay of 10 milliseconds is added after each iteration of the loop to prevent flickering.
The serial communication is initialized with a baud rate of 9600 using Serial.begin().
*/
// Define the pin of the Push Button
int BUTTON_PIN = 5;

void setup() {
  // Set the pin for the Push Button as input with internal pull-up resistor enabled
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  
  // Initialize serial communication for debugging purposes
  Serial.begin(9600);
}

void loop() {
  // Read the state of the button (HIGH or LOW)
  int buttonState = digitalRead(BUTTON_PIN);

  // Print the button state to the serial monitor (0 for pressed, 1 for not pressed)
  Serial.println(!buttonState);

  // Wait for a short time to prevent flickering or debounce
  delay(10);
}
