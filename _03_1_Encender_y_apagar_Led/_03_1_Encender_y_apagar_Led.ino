#define LED 7
#define BOTON 10

void setup(){ 
  Serial.begin(9600);
  Serial.println("Iniciando Arduino...");
  
  //inicializamos led: de salida
  pinMode(LED, OUTPUT);
  
  //inicalizamos boton: de entrada
  pinMode(BOTON, INPUT); 

} 

void loop(){
  int value=digitalRead(BOTON);
  if (value == HIGH) {
    Serial.println("ON");
    digitalWrite(LED,HIGH);
  } else {
    Serial.println("OFF");
    digitalWrite(LED,LOW);
  }
  
  delay(100);
}
