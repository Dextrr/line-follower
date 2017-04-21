// team Mechathons

int a1=5;  
int a2=6;
int b1=7;
int b2=8;
int irc;
int irl;
int irr;
int i=1;


void setup() {
  // put your setup code here, to run once:

pinMode(A3,INPUT);
pinMode(A4,INPUT);
pinMode(A5,INPUT);
pinMode(a1,OUTPUT);
pinMode(a2,OUTPUT);
pinMode(b1,OUTPUT);    
pinMode(b2,OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  
irsense();
if((irr>500)&&(irl>500)&&(irc<500))  //straight
{
digitalWrite(a1,HIGH);
digitalWrite(b1,HIGH);
digitalWrite(a2,LOW);
digitalWrite(b2,LOW);
}
else if((irr>500)&&(irl<500)&&(irc>500))  //left turn
{
digitalWrite(a1,HIGH);
digitalWrite(b1,LOW);
digitalWrite(a2,LOW);
digitalWrite(b2,LOW);
}
else if((irr<500)&&(irl>500)&&(irc>500))  //right turn
{
digitalWrite(a1,LOW);
digitalWrite(b1,HIGH);
digitalWrite(a2,LOW);
digitalWrite(b2,LOW);
}
else if((irr>500)&&(irl<500)&&(irc<500))  // sharp 90 left 
{
digitalWrite(a1,HIGH);
digitalWrite(b1,LOW);
digitalWrite(a2,LOW);
digitalWrite(b2,HIGH);
}
else if((irr<500)&&(irl>500)&&(irc<500))  // sharp 90 right 
{
digitalWrite(a1,LOW);
digitalWrite(b1,HIGH);
digitalWrite(a2,HIGH);
digitalWrite(b2,LOW);
}


else    //stop
{
digitalWrite(a1,LOW);
digitalWrite(b1,LOW);
digitalWrite(a2,LOW);
digitalWrite(b2,LOW);
}

  }
void irsense()
{
irc= analogRead(A4);
irl= analogRead(A5);
irr= analogRead(A3);

}
