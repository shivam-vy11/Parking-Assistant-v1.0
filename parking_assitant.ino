const int red = 9;
const int green = 10;
const int blue = 11;
const int buzz = 2;

int trig = 7;
int echo = 6;
long time;
int dist;
void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(buzz, OUTPUT);
}

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  time = pulseIn(echo, HIGH);

  dist= time*0.034/2;
   Serial.print("distance : ");
   Serial.print(dist);
   Serial.println(" cm ");
   delay(10);

  if(dist >= 40){
    analogWrite(red,255);
    analogWrite(green,0);
    analogWrite(blue,255);
  }
  else if(dist < 40 && dist >= 15){
    analogWrite(red,0);
    analogWrite(green,135);
    analogWrite(blue,255);
  }
  else{
    analogWrite(red,0);
    analogWrite(green,255);
    analogWrite(blue,255);
  }
  if (dist >= 15 && dist < 30){
    tone(buzz, 1000);   
    delay(500);
    noTone(buzz);      
    delay(500);
  }
  if (dist >= 5 && dist < 15){
    tone(buzz, 1000);
    delay(200);
    noTone(buzz);
    delay(200);
  }
  if(dist<5){
    tone(buzz,1000);
  }
}
