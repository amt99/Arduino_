// Define the pin of the Push Button
int BUTTON_PIN = 2;

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
