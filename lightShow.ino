int speedtime = 1000; 
void setup() {
  for (i=0; i<=4; i++){
pinMode(i, OUTPUT);   //sets pin 13 as an output 
}
}

void controlZeroAndFourLED{
digitalWrite(0, HIGH); // turns pin 0 on
digitalWrite(4, HIGH);  
delay(speedtime); //waits for a 1000 ms or a sec
digitalWrite(0, LOW); //turns pin 0 off
digitalWrite(4,LOW); 
delay(speedtime); //waits for a sec 
}

void controlOneAndThreeLED(){
digitalWrite(1, HIGH); // turns pin 0 on
digitalWrite(3, HIGH);  
delay(speedtime); //waits for a 1000 ms or a sec
digitalWrite(1, LOW); //turns pin 0 off
digitalWrite(3,LOW); 
delay(speedtime); //waits for a sec 
digitalWrite(1, HIGH); // turns pin 0 on
digitalWrite(3, HIGH);  
delay(speedtime); //waits for a 1000 ms or a sec
digitalWrite(1, LOW); //turns pin 0 off
digitalWrite(3,LOW); 
delay(speedtime); //waits for a sec 
}

void controlTwoLED(){
digitalWrite(2, HIGH); // turns pin 0 on
delay(speedtime); //waits for a 1000 ms or a sec
digitalWrite(2, LOW); //turns pin 0 off
delay(speedtime); //waits for a sec 
}

void loop() {
controlZeroAndFourLED();
controlOneAndThreeLED();  
controlTwoLED(); 
controlOneAndThreeLED(); 
controlZeroAndFourLED(); 
speedtime-=50; 
}

