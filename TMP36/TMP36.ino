int PIN_TMP36 = A0;

void setup()
{
  Serial.begin(9600); // 9600bps(bit per sec)
}

void loop()
{
  int Volt1 = analogRead(PIN_TMP36);
  float Volt2 = Volt1 * 5.0 / 1024.0;
  float Cel = (Volt2 - 0.5) * 100;
  Serial.print(Cel);
  Serial.println(" C");
  //Serial.print(Volt1 * 0.004882813);
  //Serial.println(" V1");
  //Serial.print(Volt2);
  //Serial.println(" V2");
  delay(500);
}
