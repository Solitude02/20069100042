// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
  Serial.println("I'm OK");  
}

int i;
void loop()
{
  if(Serial.available()>0)
  {
	i=Serial.read();
    i=i-'0';
    Serial.println(i);
    switch(i)
    {
      case 0:
      	digitalWrite(2, HIGH);
   	   	digitalWrite(3, HIGH);
    	digitalWrite(4, HIGH);
    	digitalWrite(5, HIGH);
    	digitalWrite(6, HIGH);
     	digitalWrite(7, HIGH);
     	digitalWrite(8, LOW);
        delay(500);
      	break;
	  case 1:
      	digitalWrite(2, LOW);
   	   	digitalWrite(3, HIGH);
    	digitalWrite(4, HIGH);
    	digitalWrite(5, LOW);
    	digitalWrite(6, LOW);
     	digitalWrite(7, LOW);
     	digitalWrite(8, LOW);
      	delay(500);
      	break;      
      case 2:
      	digitalWrite(2, HIGH);
   	   	digitalWrite(3, HIGH);
    	digitalWrite(4, LOW);
    	digitalWrite(5, HIGH);
    	digitalWrite(6, HIGH);
     	digitalWrite(7, LOW);
     	digitalWrite(8, HIGH);
        delay(500);
      	break;
      case 3:
      	digitalWrite(2, HIGH);
   	   	digitalWrite(3, HIGH);
    	digitalWrite(4, HIGH);
    	digitalWrite(5, HIGH);
    	digitalWrite(6, LOW);
     	digitalWrite(7, LOW);
     	digitalWrite(8, HIGH);
        delay(500);
      	break;
      case 4:
      	digitalWrite(2, LOW);
   	   	digitalWrite(3, HIGH);
    	digitalWrite(4, HIGH);
    	digitalWrite(5, LOW);
    	digitalWrite(6, LOW);
     	digitalWrite(7, HIGH);
     	digitalWrite(8, HIGH);
        delay(500);
      	break;
      case 5:
      	digitalWrite(2, HIGH);
   	   	digitalWrite(3, LOW);
    	digitalWrite(4, HIGH);
    	digitalWrite(5, HIGH);
    	digitalWrite(6, LOW);
     	digitalWrite(7, HIGH);
     	digitalWrite(8, HIGH);
        delay(500);
      	break;
      case 6:
      	digitalWrite(2, HIGH);
   	   	digitalWrite(3, LOW);
    	digitalWrite(4, HIGH);
    	digitalWrite(5, HIGH);
    	digitalWrite(6, HIGH);
     	digitalWrite(7, HIGH);
     	digitalWrite(8, HIGH);
        delay(500);
      	break;
      case 7:
      	digitalWrite(2, HIGH);
   	   	digitalWrite(3, HIGH);
    	digitalWrite(4, HIGH);
    	digitalWrite(5, LOW);
    	digitalWrite(6, LOW);
     	digitalWrite(7, LOW);
     	digitalWrite(8, LOW);
        delay(500);
      	break;
      case 8:
      	digitalWrite(2, HIGH);
   	   	digitalWrite(3, HIGH);
    	digitalWrite(4, HIGH);
    	digitalWrite(5, HIGH);
    	digitalWrite(6, HIGH);
     	digitalWrite(7, HIGH);
     	digitalWrite(8, HIGH);
        delay(500);
      	break;
      case 9:
      	digitalWrite(2, HIGH);
   	   	digitalWrite(3, HIGH);
    	digitalWrite(4, HIGH);
    	digitalWrite(5, HIGH);
    	digitalWrite(6, LOW);
     	digitalWrite(7, HIGH);
     	digitalWrite(8, HIGH);
        delay(500);
      	break;
      default:
      	Serial.println("error");
      	break;
    }
  }
  
}
