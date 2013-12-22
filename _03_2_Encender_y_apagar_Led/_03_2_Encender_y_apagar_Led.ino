#define LED1 7
#define LED2 13
#define BOTON 10

int estado =0;
boolean botonON = false;

void setup(){ 
  Serial.begin(9600);
  Serial.println("Iniciando Arduino...");
  
  //inicializamos los leds como de salida
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  //inicalizamos boton como entrada
  pinMode(BOTON, INPUT); 

} 

void loop(){
  int value=digitalRead(BOTON);
  //al pulsar el boton la variable botonON pasa a true
  if (value==HIGH) {
    botonON = true;
  }
  //si se a pulsado el boton entra en el bucle:
  if (botonON == true) {
    Serial.println("BOTON ON, comienza ciclo");
    
    //bucle para que pase por los 4 estados:
    for (estado=0; estado<4; estado++){
      Serial.println(estado);
      if (estado==0) {
        digitalWrite(LED1,HIGH);
        digitalWrite(LED2,HIGH);
        delay(1000);
      }
      else if (estado ==1) {
        digitalWrite(LED1,LOW);
        digitalWrite(LED2,HIGH);
        delay(100);
      }
      else if (estado ==2) {
        digitalWrite(LED1,HIGH);
        digitalWrite(LED2,LOW);
        delay(100);
      }
      else {
        digitalWrite(LED1,LOW);
        digitalWrite(LED2,LOW);
        Serial.println("fin ciclo");
      }
    }//for
    botonON = false;//al salir del bucle se vuelve a poner a false botonON
  }//if
  else {
    Serial.println("boton OFF");
  }
}//loop
