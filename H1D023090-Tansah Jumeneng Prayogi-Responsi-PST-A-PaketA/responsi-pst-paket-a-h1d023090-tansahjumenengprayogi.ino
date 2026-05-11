const int btnPenyeberang = 2;
const int ledHijau = 3;
const int ledKuning = 4; 
const int ledMerah = 5;
const int segmentPins[] = {6, 7, 8, 9, 10, 11, 12, 13};

byte digits[10][7] = {
  {1,1,1,1,1,1,0}, // 0
  {0,1,1,0,0,0,0}, // 1
  {1,1,0,1,1,0,1}, // 2
  {1,1,1,1,0,0,1}, // 3
  {0,1,1,0,0,1,1}, // 4
  {1,0,1,1,0,1,1}, // 5
  {1,0,1,1,1,1,1}, // 6
  {1,1,1,0,0,0,0}, // 7
  {1,1,1,1,1,1,1}, // 8
  {1,1,1,1,0,1,1}  // 9
};

void setup() {
  pinMode(btnPenyeberang, INPUT);
  pinMode(ledHijau, OUTPUT);
  pinMode(ledKuning, OUTPUT);
  pinMode(ledMerah, OUTPUT);
  
  for(int i = 0; i < 7; i++) pinMode(segmentPins[i], OUTPUT);

  digitalWrite(ledHijau, HIGH);
  digitalWrite(ledKuning, LOW);
  digitalWrite(ledMerah, LOW);
}

void loop() {
  if (digitalRead(btnPenyeberang) == HIGH) {
    prosesMenyeberang();
  }
}

void prosesMenyeberang() {
  digitalWrite(ledHijau, LOW);
  digitalWrite(ledKuning, HIGH);
  delay(2000); 

  digitalWrite(ledKuning, LOW);
  digitalWrite(ledMerah, HIGH);

  for (int i = 9; i >= 0; i--) {
    tampilkanAngka(i);
    delay(1000);
  }

  tampilkanAngka(-1); 
  digitalWrite(ledMerah, LOW);
  digitalWrite(ledKuning, HIGH);
  delay(1500); 
  
  digitalWrite(ledKuning, LOW);
  digitalWrite(ledHijau, HIGH);
}

void tampilkanAngka(int num) {
  if (num == -1) {
    for (int i = 0; i < 7; i++) digitalWrite(segmentPins[i], LOW);
  } else {
    for (int i = 0; i < 7; i++) {
      digitalWrite(segmentPins[i], digits[num][i]);
    }
  }
}