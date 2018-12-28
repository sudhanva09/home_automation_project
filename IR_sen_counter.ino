/*
  ESSENCE OF THE CODE
  The code consits of two functions , they are:
  void in() and void out() . void in() for if the person enters the room and void out() if the person leaves the room.
  If a person enters the room the led will glow as an indicator and if the person leaves the room the peizo will buzz as an indicator.
  The serial monitor will print the details about the movement of people inside the room and also how many people are currently present in the room.
*/



int peizo = 13; 
int obstaclePino = 7;
int obstaclePint= 8;  
int led = 12;
int ifobstacleo = HIGH;
int ifobstaclet = HIGH;  
int count=0;

void in()

   {
    count++;
    if(count>=0)
    {Serial.print("person in");
    digitalWrite(led,HIGH);
    delay(750);
    digitalWrite(led,LOW);
    digitalWrite(peizo, LOW);
    Serial.println(count);
    delay(300);}

    if(count<0)
    Serial.println("no one in the room");
    
  }
  
 void out()
 
   { count--;
      if(count>0)
          {Serial.print("person out");
          Serial.println(count);
          digitalWrite(peizo, HIGH);
          delay(500);
          digitalWrite(peizo,LOW);
          digitalWrite(led ,LOW);
          delay(300);}

      else
         Serial.println("no one in room");
   }
  
   

void setup() {
   pinMode(peizo, OUTPUT);
   pinMode(led, OUTPUT);
   pinMode(obstaclePino, INPUT);
   pinMode(obstaclePino, INPUT);
   Serial.begin(9600);  
}
void loop() {
  ifobstacleo = digitalRead(obstaclePino);
  ifobstaclet = digitalRead(obstaclePint); 
  
       
           if (ifobstacleo == LOW) 
               in();
           if(ifobstaclet == LOW)
               out();

   
 
  delay(20);
}
