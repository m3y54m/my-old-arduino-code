int pwmPin = 5;      
int inaPin = 7;     
int inbPin = 8;      
int analogPin = 0;   // potentiometer connected to analog pin 3
int val = 0;         // variable to store the read value

void setup()
{
  pinMode(pwmPin, OUTPUT);   // sets the pin as output
  pinMode(inaPin, OUTPUT);   // sets the pin as output
  pinMode(inbPin, OUTPUT);   // sets the pin as output
}

void loop()
{
  val = analogRead(analogPin);   // read the input pin
  digitalWrite(inaPin, HIGH);
  digitalWrite(inbPin, LOW);
  analogWrite(pwmPin, val / 4);  // analogRead values go from 0 to 1023, analogWrite values from 0 to 255
}
