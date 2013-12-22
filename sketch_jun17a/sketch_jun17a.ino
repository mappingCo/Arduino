void setup(){
  pinMode(13, OUTPUT); //Indica que el pin 13 es de salida 
} 
void loop(){
  digitalWrite(13, HIGH); //Activa pin 13 
  delay(1000); //Espera 1 segundo 
  digitalWrite(13, LOW); //Desactiva pin 13
  delay(1000); //Espera 1 segundo
}
