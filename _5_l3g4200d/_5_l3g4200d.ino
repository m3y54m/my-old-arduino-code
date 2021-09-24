#include <Wire.h>
#include <L3G4200D.h>

long t1=0;
long t2=0;
long dt=0;

float theta_last=0;
float theta=0;

long cz=0;

L3G4200D gyro;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  gyro.enableDefault();
  for(int i=0; i<1000; i++)
  {
    gyro.read();
    cz+=gyro.g.z;
  }
  cz=cz/1000;
}

void loop() {


  t1=millis();
  gyro.read();
  
//  Serial.print("G ");
  Serial.print("theta: ");
  Serial.println(theta);
  Serial.print(" wz: ");
  Serial.println(gyro.g.z-cz);
  Serial.print(" t: ");
  Serial.println(dt);

  delay(100);
  t2=millis();

  dt = t2 - t1;
  theta = theta_last + ((float)dt/1000)*(gyro.g.z-cz);
  theta_last = theta;    
}
