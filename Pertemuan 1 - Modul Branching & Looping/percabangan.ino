const int ledPin = 12 ;
int timeDelay = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // nyalan LED
  digitalWrite(ledPin, HIGH);
  delay(timeDelay);

  // matikan LED
  digitalWrite(ledPin, LOW);
  delay(timeDelay);

  // change the blip after one cylce
  if (timeDelay <= 100){
    delay (3000);

    idle before reset
    timeDelay = 1000 ; // reset to default
  } else {
    timeDelay -= 100 // incresing 
  }
}
