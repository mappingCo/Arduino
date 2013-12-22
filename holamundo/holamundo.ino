void setup(){ 
  //Inicializa la comunicación serial 
  Serial.begin(9600); 
} 
void loop(){
  //Escribe el mensaje Hola mundo en Serial 
  Serial.println("Hola mundo"); 
  //Espera un segundo 
  delay(1000); 
}
