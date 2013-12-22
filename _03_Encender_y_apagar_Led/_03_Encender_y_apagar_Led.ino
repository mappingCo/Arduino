#define LED 10

void setup(){ 
  Serial.begin(9600);
  Serial.println("Iniciando Arduino...");
  //indicamos al pin 10 que es de salida
  pinMode(LED, OUTPUT); 
} 

void loop(){
  //ponemos ese pin en el nivel HIGHT
 digitalWrite(LED, HIGH); 
 delay(1000);
 digitalWrite(LED, LOW);
 delay(1000);
}
