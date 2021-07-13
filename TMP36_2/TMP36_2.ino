int PIN_TMP36 = A0;
int PIN_BUTTON = 2;
boolean bMode = true;

void Callback_Smart()
{
  bMode = !bMode;
}
void setup()
{
  Serial.begin(9600); // 9600bps(bit per sec)
  pinMode(PIN_BUTTON, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(PIN_BUTTON), Callback_Smart, RISING);
}

void loop()
{
  int Volt1 = analogRead(PIN_TMP36);
  float Volt2 = Volt1 * 5.0 / 1024.0;
  float Cel = (Volt2 - 0.5) * 100;
  float Fah = ((Cel * 9.0)/5.0) + 32.0;
  /*Serial.print("[");
  Serial.print(Cel);
  Serial.print(" C]");
  Serial.print("[");
  Serial.print(Fah);
  Serial.println(" F]");*/

  if(bMode)
  {
    Serial.print("[");
    Serial.print(Cel);
    Serial.println(" C]");
  }
  else
  {
    Serial.print("[");
    Serial.print(Fah);
    Serial.println(" F]");
  }
  delay(500);
}
