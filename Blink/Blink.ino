/*This program controla an LED connected to digital pin 2.
The LED turns on for one second, then turns off for one second, and repeats this pattern indefinitely.
 This is a simple example of how to use digital output and delay functions in Arduino programming.
*/
//Define the Led pin
int LED = 2

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED, OUTPUT); 
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED, HIGH);  // turn the LED on by setting the voltage level to HIGH
  delay(1000);                      // wait for 1 second
  digitalWrite(LED, LOW);   // turn the LED off by setting the voltage level to LOW
  delay(1000);                      // wait for 1 second
}
