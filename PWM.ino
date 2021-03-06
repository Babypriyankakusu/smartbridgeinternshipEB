const int ledPin=13;
const int freq=5000;
const int ledChannel=0;
const int resolution=8;
void setup() {
  // put your setup code here, to run once:
  //configure led PWM functionalities//
  ledcSetup(ledChannel,freq,resolution);
  //attach the channel to the GPIO to be controlled//
  ledcAttachPin(ledPin,ledChannel);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int dutyCycle=0;dutyCycle<=255;dutyCycle++){
    //changing led brightness with PWM//
    ledcWrite(ledChannel,dutyCycle);
    delay(15);
  }
  for(int dutyCycle=255;dutyCycle>=0;dutyCycle--){
    //changing led brightness with PWM//
    ledcWrite(ledChannel,dutyCycle);
    delay(15);
  }

}
