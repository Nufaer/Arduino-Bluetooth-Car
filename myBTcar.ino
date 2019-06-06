char bt;
void setup() {
 Serial.begin(9600);
 pinMode(4,OUTPUT); //left motor1 forward
 pinMode(5,OUTPUT); //left motor1 backward
 pinMode(6,OUTPUT); //right motor1 forward
 pinMode(7,OUTPUT); //right motor1 backward
 pinMode(8,OUTPUT); //left motor2 forward
 pinMode(9,OUTPUT); //left motor2 backward
 pinMode(10,OUTPUT); //right motor2 forward
 pinMode(11,OUTPUT); //right motor2 backward
}

void loop() {
 bt=Serial.read();
 
 if(bt=='F'){ //forward
     digitalWrite(4,HIGH);
     digitalWrite(5,LOW);
     digitalWrite(6,HIGH);
     digitalWrite(7,LOW);
     digitalWrite(8,HIGH);
     digitalWrite(9,LOW);
     digitalWrite(10,HIGH);
     digitalWrite(11,LOW);
     delay(10);
 }
 if(bt=='R'){ //right
   digitalWrite(4,HIGH);
   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);
   digitalWrite(11,HIGH);
 }
 if(bt=='L'){ //left
   digitalWrite(4,LOW);
   digitalWrite(5,HIGH);
   digitalWrite(6,HIGH);
   digitalWrite(7,LOW);
   digitalWrite(8,LOW);
   digitalWrite(9,HIGH);
   digitalWrite(10,HIGH);
   digitalWrite(11,LOW);
 }

 if(bt=='B'){ //backword
   digitalWrite(4,LOW);
   digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);
   digitalWrite(8,LOW);
   digitalWrite(9,HIGH);
   digitalWrite(10,LOW);
   digitalWrite(11,HIGH);
   delay(10);
 }
 if(bt=='S'){ //stop
   digitalWrite(4,LOW);
   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);
   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);
   digitalWrite(11,LOW);
   delay(10);
 }

} 
