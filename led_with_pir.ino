void setup() {
  // put your setup code here, to run once:
  pinMode(22,INPUT);
  pinMode(2,OUTPUT);
 Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a=digitalRead(22);
  if(a==1){
   digitalWrite(2,HIGH);
   Serial.println("person detected");
  // delay(15);
  }
else
digitalWrite(2,LOW);
Serial.println("person not detected");
//delay(15);
}
