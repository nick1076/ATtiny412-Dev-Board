void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  delay(500);
  Serial.println("Hello World!");
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  digitalWrite(4, HIGH);
  Serial.println("Hello World!");
  delay(1000);
  digitalWrite(4, LOW);
}
