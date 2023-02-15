int sw1 = 8;// sw1 is referred as switch1 connected with pin 8
int sw2 = 9;// sw2 is referred as switch2 connected with pin 9
int led1 = 4;// led1 is referred as signal A connected with pin 4
int led2 = 5;// led2 is referred as signal B connected with pin 5
int rsw1 = 0;// rws1 is used to read digital data initially denoted as 0
int rsw2 = 0;// rws2 is used to read digital data initially denoted as 0
int p = 100;// p is denoted as parameter A which is width of pulses  
int q = 400; // q is denoted as parameter B which is space between pulses
int r = 10; // r is denoted as parameter C which is number of pulses in block
int s = 2000;// s is denoted as parameter D which is space between pulses block

void setup() {
  // put your setup code here, to run once:
  pinMode(sw1, INPUT); //sw1 is assigned as input pin
  pinMode(sw2, INPUT); //sw2 is assigned as input pin
  pinMode(led1, OUTPUT); //led1 is assigned as output pin
  pinMode(led2, OUTPUT); //led2 is assigned as output pin
}

void loop() {
  // put your main code here, to run repeatedly:
  rsw1 = digitalRead(sw1); //reading data from sw1 and stored in rsw1 
  rsw2 = digitalRead(sw2); //reading data from sw2 and stored in rsw2
  if(rsw2 == LOW)
    {
      digitalWrite(led2, HIGH); 
      delay(50);
      digitalWrite(led2, LOW);
      // the above part indicates that initiate the new cycle

      for(int i =0;i<r;i++) //this loop is used to generates the required pulses in block
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
          //this part of code generate pulses of width p and with delay of q 
        }
        //the above part indicates that if switch 1 is pressed then it generates blank signal else it generates the normal wave form
      }
      digitalWrite(led1, LOW);
      delay(s); // it is used to giving delay of s after each block
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
        //the above part indicates that if switch 1 is pressed then it generates blank signal else it generates the moded wave form
      }
      digitalWrite(led1, LOW);
      delay(s);
    }





  }




