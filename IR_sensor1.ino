void setup() {
// put your setup code here, to run once:
pinMode(2,INPUT);

Serial.begin(9600);
Serial.print("Preethi here, The sensor values\n");

}

void loop() {
// put your main code here, to run repeatedly:
Serial.println(digitalRead(2));
delay(300);
}
