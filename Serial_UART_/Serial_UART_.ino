int led1 = LOW; 
int led2 = LOW; 
int led3 = LOW;
int PIN_LED1 = 4; 
int PIN_LED2 = 5; 
int PIN_LED3 = 6;

void setup() {
  Serial.begin(9600);
  pinMode(PIN_LED1, OUTPUT);
  pinMode(PIN_LED2, OUTPUT);
  pinMode(PIN_LED3, OUTPUT);
}

void loop() {
  if(Serial.available())
  {
    char received = Serial.read();
    if(received == '1')
    {
      led1 =! led1;
      digitalWrite(PIN_LED1, led1);
      Serial.print("LED 1 = ");
      Serial.println(led1);
    }
    else if(received == '2'){
      led2 =! led2;
      digitalWrite(PIN_LED2, led2);
      Serial.print("LED 2 = ");
      Serial.println(led2);
    }
    else if(received == '3'){
      led3 =! led3;
      digitalWrite(PIN_LED3, led3);
      Serial.print("LED 3 = ");
      Serial.println(led3);
    }
  }
}
