int IRSensor1 = 1; 
int IRSensor2 = 2;

void setup() 
{
  pinMode (IRSensor1, INPUT); 
  pinMode (IRSensor2, INPUT);
  pinMode (6, OUTPUT); 
  pinMode (7, OUTPUT);
  pinMode (8, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (11, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (13, OUTPUT);
}

void loop()
{
  int statusSensor1 = digitalRead (IRSensor1);
  int statusSensor2 = digitalRead (IRSensor2);
  
  if (statusSensor1 == 0)
  {
    digitalWrite(6, HIGH);
    delay(500);
     digitalWrite(7, HIGH);
    delay(500);
     digitalWrite(8, HIGH);
    delay(500);
     digitalWrite(9, HIGH);
    delay(500);
     digitalWrite(10, HIGH);
    delay(500);
     digitalWrite(11, HIGH);
    delay(500);
     digitalWrite(12, HIGH);
    delay(500);
     digitalWrite(13, HIGH);
     delay(1000);
     digitalWrite(6, LOW);
    delay(500);
     digitalWrite(7, LOW);
    delay(500);
     digitalWrite(8, LOW);
    delay(500);
     digitalWrite(9, LOW);
    delay(500);
     digitalWrite(10, LOW);
    delay(500);
     digitalWrite(11, LOW);
    delay(500);
     digitalWrite(12, LOW);
    delay(500);
     digitalWrite(13, LOW);
  }
 
  else
  {
     digitalWrite(13, LOW);
     digitalWrite(12, LOW);
     digitalWrite(11, LOW);
     digitalWrite(10, LOW);
     digitalWrite(9, LOW);
     digitalWrite(8, LOW);
     digitalWrite(7, LOW);
     digitalWrite(6, LOW);
  }  

  if (statusSensor2 == 0)
  {
     digitalWrite(13, HIGH);
    delay(500);
     digitalWrite(12, HIGH);
    delay(500);
     digitalWrite(11, HIGH);
    delay(500);
     digitalWrite(10, HIGH);
    delay(500);
     digitalWrite(9, HIGH);
    delay(500);
     digitalWrite(8, HIGH);
    delay(500);
     digitalWrite(7, HIGH);
    delay(500);
     digitalWrite(6, HIGH);
    delay(1000);
     digitalWrite(13, LOW);
    delay(500);
     digitalWrite(12, LOW);
    delay(500);
     digitalWrite(11, LOW);
    delay(500);
     digitalWrite(10, LOW);
    delay(500);
     digitalWrite(9, LOW);
    delay(500);
     digitalWrite(8, LOW);
    delay(500);
     digitalWrite(7, LOW);
    delay(500);
     digitalWrite(6, LOW);
  }
  else
  {
     digitalWrite(13, LOW);
     digitalWrite(12, LOW);
     digitalWrite(11, LOW);
     digitalWrite(10, LOW);
     digitalWrite(9, LOW);
     digitalWrite(8, LOW);
     digitalWrite(7, LOW);
     digitalWrite(6, LOW);
  }  
}