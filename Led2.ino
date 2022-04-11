void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(3, OUTPUT);
    pinMode(2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second  
  digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(0);                       // wait for a second
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for a second   
  digitalWrite(3, LOW);    // turn the LED off by making the voltage LOW
  delay(0);                       // wait for a second
}
