int const waterSensorPin = 0;
void setup() {
  pinMode(waterSensorPin+ A1, OUTPUT);
  Serial.begin(9600);}
void loop(){
  int waterSensorValue = readSensor(waterSensorPin);
  Serial.println(waterSensorValue);
  delay(1000);
}

int readSensor( int analogPin ) {
  digitalWrite( A1 + analogPin, HIGH );
  delay( 1 ); // 1 millisecond
  int value = analogRead( analogPin );
  digitalWrite( A1 + analogPin, LOW );
  return value;
}
