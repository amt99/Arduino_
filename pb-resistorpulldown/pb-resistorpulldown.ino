/*
This program reads the state of a push button connected to pin 5 and prints it to the serial monitor.
The button pin is set as an input with the pull-down resistor as the button state shows.
The loop() function continuously reads the state of the button using digitalRead() and prints it 
to the serial monitor using Serial.println().
A short delay of 10 milliseconds is added after each iteration of the loop to prevent flickering.
The serial communication is initialized with a baud rate of 9600 using Serial.begin().
*/

//define the pin of the Push Button
 int BUTTON_PIN = 5;

void setup() {
  //set the pin for the Push Button
  pinMode(BUTTON_PIN, INPUT); // set the button pin as input with internal pull-up resistor enabled
  Serial.begin(9600); // initialize serial communication
}

void loop() {
  // read the state of the button
  int buttonState = digitalRead(BUTTON_PIN);

  // print the button state to the serial monitor
  Serial.println(buttonState);

  // wait for a short time to prevent flickering
  delay(10);
}
