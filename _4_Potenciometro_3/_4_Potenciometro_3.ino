int value;

void setup () {
  Serial.begin(9600);
  while(!Serial);
  Serial.println("Iniciando arduino");
  //define el pin 9 como de salida
  pinMode(9, OUTPUT);

}

void loop(){
  //lee el valor del pin AO
  value= (analogRead(0)*253.00)/1023;
  
  Serial.println(value);
  //escribe ese valor en el pin ~9
  analogWrite(9, value);


  
}//loop
