int timer = 100 ;

void setup() {
  // put your setup code here, to run once:
  for (int ledPin = 11; ledPin < 14; ledPin++){
    pinMode(ledPin, OUTPUT);
  }
}

void loop() {
  // loop from low to high led pin
  for (int ledPin = 11; ledPin <= 13; ledPin++){
    digitalWrite(ledPin, HIGH);
    delay(timer);
    digitalWrite(ledPin, LOW);
  }

  // loop from high to low led pin
  for (int ledPin = 13; ledPin >= 11; ledPin++){
    digitalWrite(ledPin, HIGH);
    delay(timer);
    digitalWrite(ledPin, LOW);
  }
}
