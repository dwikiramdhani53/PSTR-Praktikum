int ledPin = 9;      // LED di pin 9

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  int val = analogRead(A0);             // potentiometer value

  analogWrite(ledPin, val / 4);
}
