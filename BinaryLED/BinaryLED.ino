int pin2 = 13;
int pin1 = 12;
int pin0 = 8;
int del = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin2, OUTPUT);
  pinMode(pin1, OUTPUT);
  pinMode(pin0, OUTPUT);
}

void loop() {
  /* Flash binary numbers 0 thru 7 */
  digitalWrite(pin2,LOW);
  digitalWrite(pin1,LOW);
  digitalWrite(pin0,LOW);
  delay(del);
  digitalWrite(pin2,LOW);
  digitalWrite(pin1,LOW);
  digitalWrite(pin0,HIGH);
  delay(del);
  digitalWrite(pin2,LOW);
  digitalWrite(pin1,HIGH);
  digitalWrite(pin0,LOW);
  delay(del);
  digitalWrite(pin2,LOW);
  digitalWrite(pin1,HIGH);
  digitalWrite(pin0,HIGH);
  delay(del);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin1,LOW);
  digitalWrite(pin0,LOW);
  delay(del);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin1,LOW);
  digitalWrite(pin0,HIGH);
  delay(del);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin1,HIGH);
  digitalWrite(pin0,LOW);
  delay(del);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin1,HIGH);
  digitalWrite(pin0,HIGH);
  delay(del);
}
