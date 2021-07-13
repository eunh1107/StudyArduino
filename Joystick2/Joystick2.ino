#define BEEP_NUM  2000
  int blue=3;
  int green = 5;
  int red   = 10;
  int PinSpk  = 9;
void setup() {

  
  pinMode(6, INPUT_PULLUP);    // 버튼 핀을 읽기 모드로 
  Serial.begin(9600);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  
}

void loop() {
  
  int vertical, horizontal, select;
  vertical = analogRead(A0);   // x축 = 0-1023
  horizontal = analogRead(A1); // y축 = 0-1023
  select = digitalRead(6);     // 버튼, 눌렀을 때 = LOW, 뗐을 때 = HIGH

  Serial.print("X = ");
  Serial.print(vertical);
  Serial.print(", Y = ");
  Serial.print(horizontal);
  Serial.print(", Button = ");

  if (vertical == 1023)
  {
    digitalWrite(blue,1);
    digitalWrite(green,1);
    digitalWrite(red,1);
  }
  else if ( horizontal == 1023)
  {
    digitalWrite(blue,1);
    digitalWrite(green,0);
    digitalWrite(red,0);
  }
  else if ( horizontal == 0)
  {
    digitalWrite(blue,0);
    digitalWrite(green,1);
    digitalWrite(red,0);
  }
  else if ( vertical == 0)
  {
    digitalWrite(blue,0);
    digitalWrite(green,0);
    digitalWrite(red,1);
  }
  else
  {
    digitalWrite(blue,0);
    digitalWrite(green,0);
    digitalWrite(red,0);
  }


  if(select == HIGH) {
    Serial.println("not pressed");
    
  } else {
    Serial.println("PRESSED!");
    tone(PinSpk, BEEP_NUM, 30);
    delay(180);
  }
  delay(200);
}
