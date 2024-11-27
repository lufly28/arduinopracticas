// C++ code
//
void setup()
{
  pinMode(12, OUTPUT);
  digitalWrite(12, LOW);
}

void loop()
{
  digitalWrite(12, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(12, LOW);
  delay(500); // Wait for 500 millisecond(s)
}