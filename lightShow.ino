// int speedtime = 1000; 
// void setup() {
//   for (int i=0; i<=4; i++){
// pinMode(i, OUTPUT);   //sets pin 13 as an output 
// }
// }

// void controlZeroAndFourLED() {
// digitalWrite(0, HIGH); // turns pin 0 on
// digitalWrite(4, HIGH);  
// delay(speedtime); //waits for a 1000 ms or a sec
// digitalWrite(0, LOW); //turns pin 0 off
// digitalWrite(4,LOW); 
// delay(speedtime); //waits for a sec 
// }

// void controlOneAndThreeLED(){
// digitalWrite(1, HIGH); // turns pin 0 on
// digitalWrite(3, HIGH);  
// delay(speedtime); //waits for a 1000 ms or a sec
// digitalWrite(1, LOW); //turns pin 0 off
// digitalWrite(3,LOW); 
// delay(speedtime); //waits for a sec 
// digitalWrite(1, HIGH); // turns pin 0 on
// digitalWrite(3, HIGH);  
// delay(speedtime); //waits for a 1000 ms or a sec
// digitalWrite(1, LOW); //turns pin 0 off
// digitalWrite(3,LOW); 
// delay(speedtime); //waits for a sec 
// }

// void controlTwoLED(){
// digitalWrite(2, HIGH); // turns pin 0 on
// delay(speedtime); //waits for a 1000 ms or a sec
// digitalWrite(2, LOW); //turns pin 0 off
// delay(speedtime); //waits for a sec 
// }

// void loop() {
// controlZeroAndFourLED();
// controlOneAndThreeLED();  
// controlTwoLED(); 
// controlOneAndThreeLED(); 
// controlZeroAndFourLED(); 
// speedtime-=50; 
// }



//you use void when you're not returning anything
//if you want to use return something, use int instead
int speedtime = 1000; 
int newspeed = 500; 


void setup() {
pinMode(0, OUTPUT);
pinMode(8, OUTPUT);
}

void control3LEDs() {
digitalWrite(8, HIGH);  
delay(newspeed); 
digitalWrite(8, LOW);
 
}

void control2LEDs(){
digitalWrite(0, HIGH); 
delay(newspeed); //waits for a 1000 ms or a sec
digitalWrite(0,LOW); 
delay(newspeed); 
digitalWrite(0, HIGH); 
delay(newspeed); //waits for a 1000 ms or a sec
digitalWrite(0,LOW); 

}

void loop() {
control3LEDs(); 
delay(speedtime); 
control2LEDs(); 
delay(speedtime); 
speedtime-=200; 
}



