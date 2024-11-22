// we control the motor via motor driver
int motor1pin1=13;          //declaring user defined variable motor1pin1 with the pin numbers of esp32
int motore1pin2=12;

void setup()
{
  pinMode(motor1pin1,OUTPUT); //defining the dclared pins as output
  pinMode(motor1pin2,OUTPUT);
}
void loop()
{
  digitalWrite(motor1pin1,HIGH);    //writing high to low, making motor turn clock wise
  digitalWrite(motor1pin1,LOW);
}
