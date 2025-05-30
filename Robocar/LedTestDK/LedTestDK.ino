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
}

void loop(){
digitalWrite(LeftLedA,HIGH);
digitalWrite(RightLedA,HIGH);
delay(500);

digitalWrite(LeftLedA,LOW);
digitalWrite(RightLedA,LOW);
delay(500);

digitalWrite(LeftLedB,HIGH);
digitalWrite(RightLedB,HIGH);
delay(500);

digitalWrite(LeftLedB,LOW);
digitalWrite(RightLedB,LOW);
delay(500);

digitalWrite(LedC,HIGH);
delay(500);

digitalWrite(LedC,LOW);
delay(500);

}
