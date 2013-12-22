#define SENSOR 0 
void setup() { 
  Serial.begin(9600); 
} 

void loop(){
  //Leemos la señal analógica 
  int lectura = analogRead(SENSOR); 
  //Convertimos la señal a voltios 
  float voltaje = lectura * 5.0/1024.0; 
  Serial.print(voltaje); 
  Serial.println(" voltios"); 
  
  //convertimos con 10 mv por grado con 500 mV offset 
  float tempC = (voltaje - 0.5) * 100 ; 

  Serial.print(tempC); 
  Serial.println(" C"); 
  delay(1000); 
}
