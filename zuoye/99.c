// C++ code
//
#include<MsTimer2.h>
int tick=0,tock=0;
void onTimer()
{
  Serial.print("timer ");
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  digitalWrite(6,HIGH);
  delay(500);
  digitalWrite(6,LOW);
  
  Serial.print(tick);
  Serial.println(tock);
  
  digitalWrite(2,(tock&0x1));
  digitalWrite(3,((tock>>1)&0x1));
  digitalWrite(4,((tock>>2)&0x1));
  digitalWrite(5,((tock>>3)&0x1));
  
  digitalWrite(8,(tick&0x1));
  digitalWrite(9,((tick>>1)&0x1));
  digitalWrite(10,((tick>>2)&0x1));
  digitalWrite(11,((tick>>3)&0x1));
  delay(500); 
  
  tock++;
  if(tock>9)
  {
    tick++;
    tock=0;
  }
}

void setup()
{
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, INPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  onTimer();
  if (digitalRead(7)==LOW)
  {
    tick=0;
    tock=0;
  }
}
