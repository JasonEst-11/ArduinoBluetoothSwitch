void setup() {
  Serial.begin(9600);
  pinMode(9,OUTPUT);
}
void loop() {
  if(Serial.available() > 0){
    char input = Serial.read();
    if(input == '1'){
      digitalWrite(9, true);
    }
    if(input == '0'){
      digitalWrite(9, false);
    }
  } 
}
