/*ESSENCE OF THE CODE

 The code starts with the definition of the pins and the declaration of duration and distance.
 First pulse is sent and distance no. one is calculated , the same thing is done for the second pulse with a delay of 10 microsecs and distance no. two is calculated.
 Then distance no. one and two are compared and state of the object is shown on the serial monitor   
 */




int trigPin = 11;    
int echoPin = 12;    
long durationo, cmo, durationt,cmt;
 
void setup() {
  //Serial Port begin
  Serial.begin (9600);
  //Define inputs and outputs
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
 
void loop() {
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  
  pinMode(echoPin, INPUT);
  durationo = pulseIn(echoPin, HIGH);
 
 
  cmo = (durationo/2) / 29.1;     //  or multiply by 0.0343
 
  
 
  
  delayMicroseconds(10);



//secondary code starts here
digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
 
  pinMode(echoPin, INPUT);
  durationt = pulseIn(echoPin, HIGH);
 
  
  cmt = (durationt/2) / 29.1;     // or multiply by 0.0343
 
  

  
  delay(750);

if(cmo==cmt)
{
Serial.print("Stationary Distance=");
Serial.print(cmo);
Serial.println();
}

else if(cmo<cmt)
{
Serial.print("object moving towards sensor");
Serial.println();
}

else
{
Serial.print("object moving away from the sensor");
Serial.println();
}


}
