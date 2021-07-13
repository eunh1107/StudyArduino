int PIN_Seg[]   =   {2,3,4,5,6,7,8};
int PIN_Sel[]   =   {12,11,10,9};
int DNUM[10][7] = { {1,1,1,1,1,1,0},  // 0
                    {0,1,1,0,0,0,0},  // 1
                    {1,1,0,1,1,0,1},  // 2
                    {1,1,1,1,0,0,1},  // 3
                    {0,1,1,0,0,1,1},  // 4
                    {1,0,1,1,0,1,1},  // 5
                    {1,0,1,1,1,1,1},  // 6
                    {1,1,1,0,0,1,0},  // 7
                    {1,1,1,1,1,1,1},  // 8
                    {1,1,1,1,0,1,1}   // 9
};

void PrintNum(int Num)
{
  for(int i = 0; i<7; ++i)
  {
    digitalWrite(PIN_Seg[i], DNUM[Num][i]);
  }
}
void setup() {
  for(int i = 0; i<7; ++i)
  {
    pinMode(PIN_Seg[i], OUTPUT);
  }
  for(int i = 0; i<4; ++i)
  {
    pinMode(PIN_Sel[i], OUTPUT);
    digitalWrite(PIN_Sel[i], HIGH);
  }
  
  
}

// 0~99까지
void loop() {
  int iNum = 1024;

  digitalWrite(PIN_Sel[0], LOW); // 1을 출력
  digitalWrite(PIN_Sel[1], LOW); // 0을 출력
  digitalWrite(PIN_Sel[2], LOW); // 2를 출력
  digitalWrite(PIN_Sel[3], LOW); // 4출력
  
  while(1)
  {
  ///
  // 1 : iNum/1000
  // 0 : (iNum%1000)/100
  // 2 : (iNum%100)/10
  // 4 : (iNum%10)
  }

}
