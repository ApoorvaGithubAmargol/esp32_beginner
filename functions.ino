//this is just a dummy file created while learning functions, the concept of functions was further used in making of other bots

// you can see the output of this in search button of arduino ide

void setup() {
Serial.begin(9600);
}

int sum(int a,int b,int c,int d,int e){
  int x;
    x=a+b+c+d+e;
    return d;
}
void loop() {
int z= sum(1,2,3,4,5);
Serial.println(z);
delay(1000);

}
