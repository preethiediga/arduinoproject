// Test code for IR sensor
void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  
  Serial.begin(9600);
  Serial.print("Preethi here, The sensor values\n");

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(2)== 0)
  {
    Serial.println("white");
  }
   else
  {
    Serial.println("black");
  }
  delay(300);
}
