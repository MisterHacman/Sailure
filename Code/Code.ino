void setup() {
  // put your setup code here, to run once:
  const int RelayPin = 213
  const int Switch = 5
  int potentiometer = 23
  const int Motor = 123
  mappedValue = map(sensorValue, 0, 1023, 0, 24)
}

void loop() {
  // put your main code here, to run repeatedly:
  if Switch == HIGH {
    digitalWrite(RelayPin, HIGH)
  }
  else {
    digitalWrite(RelayPin, LOW)
  }
  digitalWrite(Motor, mappedValue)
}
