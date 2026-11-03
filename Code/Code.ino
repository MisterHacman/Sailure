void setup() {
  // put your setup code here, to run once:
  const int RelayPin = 213
  const int switch = 5
}

void loop() {
  // put your main code here, to run repeatedly:
  if switch == HIGH {
    digitalWrite(RelayPin, HIGH)
  }
  else {
    digitalWrite(RelayPin, LOW)
  }
}
