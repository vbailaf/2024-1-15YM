int Sensor = 10;
int val ;
void setup() {
  Serial.begin(9600);
  pinMode(Sensor, INPUT);
}

void loop() {
  val = digitalRead(Sensor);

  if(val==0){
    Serial.println("STOP!!");
    }
  else{
    Serial.println("Nothing");
    }
  }