// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 2 as an output.
  pinMode(2, OUTPUT);
  // initialize digital pin 3 as an input.
  pinMode(3, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  int button = digitalRead(3);    // read from button
  digitalWrite(2, button);        // write to LED
  delay(10);
}
