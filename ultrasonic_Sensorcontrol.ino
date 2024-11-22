const int trigpin=22;
const int echopin=23;
long distance;
int duration;

void setup(){
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,OUTPUT);
  serial.begin(9600);

}

void loop(){
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  duration= pulseIn(echopin,HIGH);
  distance= duration*0.034/2;
  serial.print("distance");
  serial.println(distance);
  delay(1000);
}
