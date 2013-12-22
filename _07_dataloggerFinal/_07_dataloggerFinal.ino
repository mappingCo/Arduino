#define GREEN 5
#define TMP 0
#define LDR 4

void setup() { 
  Serial.begin(9600);
  while(!Serial); Serial.println("Iniciando Arduino..."); 
  pinMode(GREEN, OUTPUT);
} 

void loop(){
  //Leemos la señal analógica del sensor de temperatura 
  int lecturaTemp = analogRead(TMP); 
  //Convertimos la señal a voltios 
  float voltajeTemp = lecturaTemp * 5.0/1024.0; 
  
  //convertimos con 10 mv por grado con 500 mV offset 
  float tempC = (voltajeTemp - 0.5) * 100 ; 

  //alarma
  if(tempC>28){ 
    alarma(); 
  }
  Serial.println("******************");
  
  //Leemos la señal analógica de la fotoresistencia 
  int lecturaLDR = analogRead(LDR); 
  //Convertimos la señal a voltios 
  float voltajeLDR = lecturaLDR * 5.0/1024.0; 
  //Obtenemos el valor de la resistencia 
  float r = 10000 * ((5/voltajeLDR)-1);  
  delay(1000);
  
  //Alarma:
  if(r>20000 || r<5000){ 
    alarma(); 
  }
  
  if(r<20000 && r>5000 && tempC<=28){ 
    silenciar();
    Serial.print(tempC);  Serial.print(" C");  
    Serial.print(","); 
    Serial.print(r);   Serial.println(" Ohm"); 
    delay(1000);
  }
  
  
}
void alarma(){ 
  digitalWrite(GREEN, HIGH);
  delay(300);
  digitalWrite(GREEN, LOW);
  delay(300);
  Serial.println("Alarma"); 
  Serial.println("led encendido"); 
  delay(1000);
} 

void silenciar(){ 
  digitalWrite(GREEN, LOW);
  Serial.println("led apagado"); 
 delay(1000);
}
