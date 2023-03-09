void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT); 
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on by setting the voltage level to HIGH
  delay(1000);                      // wait for 1 second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by setting the voltage level to LOW
  delay(1000);                      // wait for 1 second
}
