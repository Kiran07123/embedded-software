int sw1 = 8;
int sw2 = 9;
int led1 = 4;
int led2 = 5;
int rsw1 = 0;
int rsw2 = 0;
int p = 100;
int q = 400;
int r = 10;
int s = 2000;

void setup() {
  // put your setup code here, to run once:
  pinMode(sw1, INPUT);
  pinMode(sw2, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  rsw1 = digitalRead(sw1);
  rsw2 = digitalRead(sw2);
  if(rsw2 == LOW)
    {
      digitalWrite(led2, HIGH);
      delay(50);
      digitalWrite(led2, LOW);

      for(int i =0;i<r;i++)
      {
        rsw1 = digitalRead(sw1);
        if(rsw1 == HIGH)
        {
          digitalWrite(led1,LOW);
          digitalWrite(led2, LOW);
        }
        else{
          digitalWrite(led1, HIGH);
          delay(p);
          digitalWrite(led1, LOW);
          delay(q);
          p = p+50;

        }
        
      }
      digitalWrite(led1, LOW);
      delay(s);
    }
  else{

      digitalWrite(led2, HIGH);
      delay(50);
      digitalWrite(led2, LOW);

      for(int i =0;i<(r+3);i++)
      {
        rsw1 = digitalRead(sw1);
        if(rsw1 == HIGH)
        {
          digitalWrite(led1,LOW);
          digitalWrite(led2, LOW);
        }
        else{
          digitalWrite(led1, HIGH);
          delay(p);
          digitalWrite(led1, LOW);
          delay(q);
          p = p+50;

        }
        
      }
      digitalWrite(led1, LOW);
      delay(s);
    }





  }




