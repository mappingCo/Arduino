int value;
float tension;

void setup () {
  Serial.begin(9600);
  while(!Serial);
  Serial.println("Iniciando arduino");
}

void loop(){
  //lee el valor del pin AO
  value= analogRead(0);
  tension =(value*5.00)/1023;
  Serial.print(tension);
  Serial.println("V");
  delay(500);
  
}//loop
