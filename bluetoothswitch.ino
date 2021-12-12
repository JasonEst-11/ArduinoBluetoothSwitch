void setup() {
  Serial.begin(9600);
  pinMode(9,OUTPUT);
}

void loop() {
  if(serial.available() > 0){
      if(serial.read() == "on"){
        digitalWrite(9, true);
      }
      if(serial.read() == "off"){
        digitalWrite(9, false);
      }
  }
  
}
