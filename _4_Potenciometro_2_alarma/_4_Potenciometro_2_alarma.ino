void setup(){ 
  pinMode(9, OUTPUT);
} 

void loop(){
 tone(9, 2000, 300); 
 delay(1000); 
 noTone(9);
}
