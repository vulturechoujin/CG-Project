const int S1 = 2;
const int S2 = 3;
const int IR_Pin = A0;
void setup() {
  // put your setup code here, to run once:
  pinMode(S1,OUTPUT);
  pinMode(S2,OUTPUT);
  pinMode(IR_Pin,INPUT);
  Serial.begin(9600);
}
double voltage_converter(int val){
  return double(val) * (5.0/1023);
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(S1,HIGH);
  digitalWrite(S2,HIGH);
  Serial.println(voltage_converter(analogRead(IR_Pin)));
  Serial.println("stop");
  delay(3000);
  Serial.println(voltage_converter(analogRead(IR_Pin)));
  digitalWrite(S1,LOW);
  digitalWrite(S2,HIGH);
  Serial.println(voltage_converter(analogRead(IR_Pin)));
  delay(1000);
  digitalWrite(S1,HIGH);
  digitalWrite(S2,LOW);
  Serial.println(voltage_converter(analogRead(IR_Pin)));
  delay(1000);
  digitalWrite(S1,LOW);
  digitalWrite(S2,LOW);
  Serial.println(voltage_converter(analogRead(IR_Pin)));
  delay(1000);
}
