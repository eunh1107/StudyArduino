void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(2, OUTPUT);
  attachInterrupt(1, blink, CHANGE);  // D3 핀에 인터럽트 설정
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}

// ISR: 인터럽트가 발생할 때 실행되는 함수
void blink() {
  int button = digitalRead(3);   // 버튼 상태 체크
  digitalWrite(2, button);    // LED 제어
}
