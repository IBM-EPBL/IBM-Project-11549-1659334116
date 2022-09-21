// C++ code
//
int trig =2;
int echo =3;
void setup()
{
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(7,INPUT);
  Serial.begin(9600);
  pinMode(6,OUTPUT);
  pinMode(4,OUTPUT);
}

void loop()
{
  int m=digitalRead(7);
  digitalWrite(trig,LOW);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  float dur = pulseIn(echo,HIGH);
  float dist = (dur*0.0343)/2;
  Serial.print("distance:");
  Serial.println(dist);
  if(dist<=100)
  {
    digitalWrite(6,HIGH);
  }
  else
  {
    digitalWrite(6,LOW);
    digitalWrite(4,LOW);
  }
  if(m==1)
  {
    digitalWrite(4,HIGH);
  }
  else
  {
    digitalWrite(4,LOW);
  }
  
}