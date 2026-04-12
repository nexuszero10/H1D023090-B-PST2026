int timer = 100 ;

void setup() {
  // put your setup code here, to run once:
  for (int ledPin = 2; ledPin < 8; ledPin++){
    pinMode(ledPin, OUTPUT);
  }
}

void loop() {
  // menyalakan LED kiri (pin 2, 3, 4)
  for (int ledPin = 2; ledPin <= 4; ledPin++){
    digitalWrite(ledPin, HIGH);
  }

  // mematikan LED kiri
  for (int ledPin = 2; ledPin <= 4; ledPin++){
    digitalWrite(ledPin, LOW);
  }

  // menyalakan LED kanan (pin 2, 3, 4)
  for (int ledPin = 5; ledPin <= 7; ledPin++){
    digitalWrite(ledPin, HIGH);
  }

  // mematikan LED kanan
  for (int ledPin = 5; ledPin <= 7; ledPin++){
    digitalWrite(ledPin, LOW);
}
