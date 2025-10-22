void setup() {
  Serial.begin(9600);
  pinMode(A0,INPUT);
}

void loop() {
  int value = analogRead(A0);
  Serial.printIn(value);
  delay(100);
}
