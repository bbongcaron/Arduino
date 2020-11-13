int pinNumber = 13;
int del = 1000;

void setup() {
  // put your setup code here, to run once:
  // tell arduino: output voltage @pin 13
  pinMode(pinNumber, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  // tell Arduino: @pin 13, set to high voltage
  // not going to turn off unless we tell it to via digitalWrite
  digitalWrite(pinNumber, HIGH);
  // delay 1000 ms = 1 s
  delay(del);
  digitalWrite(pinNumber, LOW);
  delay(del);
  // essentially on for del, off for a del
  // after code is uploaded, only purpose of USB B input
  // into Arduino is for power. Battery can also be used. 
  // Code is stored on arduino until overwritten
}
