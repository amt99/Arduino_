 //define the pin of the Push Button
 int BUTTON_PIN = 2;

void setup() {
  //set the pin for the Push Button
  pinMode(BUTTON_PIN, INPUT); // set the button pin as input with internal pull-up resistor enabled
  Serial.begin(9600); // initialize serial communication
}

void loop() {
  // read the state of the button
  int buttonState = digitalRead(BUTTON_PIN);

  // print the button state to the serial monitor
  Serial.println(!buttonState);

  // wait for a short time to prevent flickering
  delay(10);
}
