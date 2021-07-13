int PIN_Seg[]   =   {2,3,4,5,6,7,8,9};
int DNUM[10][8] = { {0,1,1,1,1,1,1,0},  // 0
                    {0,1,0,0,1,0,0,0},  // 1
                    {0,0,1,1,1,1,0,1},  // 2
                    {0,1,1,0,1,1,0,1},  // 3
                    {0,1,0,0,1,0,1,1},  // 4
                    {0,1,1,0,0,1,1,1},  // 5
                    {0,1,1,1,0,1,1,1},  // 6
                    {0,1,0,0,1,1,1,0},  // 7
                    {0,1,1,1,1,1,1,1},  // 8
                    {0,1,1,0,1,1,1,1}   // 9
};

void PrintNum(int Num)
{
  for(int i = 0; i<8; ++i)
  {
    digitalWrite(PIN_Seg[i], DNUM[Num][i]);
  }
}

void setup() {
  for(int i = 0; i<8; ++i)
  {
    pinMode(PIN_Seg[i], OUTPUT);
  }
  
  
  /*for(int i = 0; i<8; ++i)
  {
    digitalWrite(PIN_Seg[i], HIGH);
  }*/
  /*digitalWrite(PIN_Seg[1], HIGH);
  digitalWrite(PIN_Seg[4], HIGH);*/

  /*digitalWrite(PIN_Seg[0], LOW); // 점
  digitalWrite(PIN_Seg[1], HIGH); // 3
  digitalWrite(PIN_Seg[2], HIGH); // 4  
  digitalWrite(PIN_Seg[3], HIGH); // 5
  digitalWrite(PIN_Seg[4], HIGH); // 6
  digitalWrite(PIN_Seg[5], HIGH); // 7
  digitalWrite(PIN_Seg[6], HIGH); // 8
  digitalWrite(PIN_Seg[7], LOW);  // 9*/
}

void loop() {
  int iNum = 0;
  while(1)
  {
    PrintNum(iNum);
    delay(1000);
    ++iNum;
    if(iNum > 9)
    {
      iNum = 0;
    }
  }
}
