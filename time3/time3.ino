// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
pinMode(13, OUTPUT);
pinMode(2, OUTPUT);
pinMode(3, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second

  int button = digitalRead(3);
  digitalWrite(2, button);
  delay(10);
}
