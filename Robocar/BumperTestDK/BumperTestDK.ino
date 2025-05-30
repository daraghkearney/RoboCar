const int LeftLedA = 12;
const int LeftLedB = 13;
const int LedC = 1;
const int RightLedA = 4;
const int RightLedB = 5;
const int RightBmpr = 3;
const int LeftBmpr = 2;

void setup(){
pinMode(LedC,OUTPUT);
pinMode(LeftLedA,OUTPUT);
pinMode(LeftLedB,OUTPUT);
pinMode(RightLedA,OUTPUT);
pinMode(RightLedB,OUTPUT);
pinMode(RightBmpr,INPUT);
pinMode(LeftBmpr,INPUT);
}

void loop(){
if(digitalRead(LeftBmpr) ==LOW)
{
  digitalWrite(LeftLedA,HIGH);
  digitalWrite(LeftLedB,HIGH);
  digitalWrite(LedC,LOW);
  delay(500);
  digitalWrite(LeftLedA,LOW);
  digitalWrite(LeftLedB,LOW);
  }
  else if(digitalRead(RightBmpr) == LOW)
  {
    digitalWrite(RightLedA,HIGH);
    digitalWrite(RightLedB,HIGH);
    digitalWrite(LedC,LOW);
    delay(500);
    digitalWrite(RightLedA,LOW);
    digitalWrite(RightLedB,LOW);
}
else{
  digitalWrite(LedC,HIGH);
}
}
