void setup() {
  Serial.begin(9600);
  pinMode(9,OUTPUT);//relay pin 
}

void loop() {
  //check for serial data
  if(serial.available() > 0){
     // if statements
      if(serial.read() == "on"){
        digitalWrite(9, true);
      }
      if(serial.read() == "off"){
        digitalWrite(9, false);
      }
  }
  
}
