void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
  // initialize digital pin 13 as an output.
   pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(1);              // wait for a second
  Serial.println("Salam");
}
