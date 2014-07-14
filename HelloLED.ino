/*  Hello LED! */
const int ledPin = 2;

void setup()
{
  pinMode(ledPin,OUTPUT);
}

void loop()
{
  digitalWrite(ledPin,HIGH);
  delay(2000);  // delay in ms
  digitalWrite(ledPin,LOW);
  delay(2000);
}
