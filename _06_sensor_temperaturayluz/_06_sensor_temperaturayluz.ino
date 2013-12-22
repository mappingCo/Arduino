#define TMP 0
#define LDR 4

void setup() { 
  Serial.begin(9600);
  while(!Serial); Serial.println("Iniciando Arduino..."); 
} 

void loop(){
  //Leemos la señal analógica del sensor de temperatura 
  int lecturaTemp = analogRead(TMP); 
  //Convertimos la señal a voltios 
  float voltajeTemp = lecturaTemp * 5.0/1024.0; 
  Serial.print(voltajeTemp); 
  Serial.println(" voltios"); 
  
  //convertimos con 10 mv por grado con 500 mV offset 
  float tempC = (voltajeTemp - 0.5) * 100 ; 

  Serial.print(tempC); 
  Serial.println(" C"); 
  delay(1000); 
  Serial.print("******************");
  
  //Leemos la señal analógica de la fotoresistencia 
  int lecturaLDR = analogRead(LDR); 
  //Convertimos la señal a voltios 
  float voltajeLDR = lecturaLDR * 5.0/1024.0; 
  Serial.print(voltajeLDR); 
  Serial.println(" voltios"); 
  //Obtenemos el valor de la resistencia 
  float r = 10000 * ((5/voltaje)-1); 
  Serial.print(r); 
  Serial.println(" Ohm"); 
  delay(1000);
  
}
