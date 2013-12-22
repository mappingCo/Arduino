int enteros[10];

void setup(){  
  delay(4000);
  
  Serial.begin(9600);
  Serial.println("Iniciando Arduino...");
  
}

void loop(){
  
  rellenar();
  
  imprimir();
  
  Serial.print("MAX: ");
  Serial.println(maximo());
  
  Serial.print("MIN: ");
  Serial.println(minimo());
  
  delay(5000);
}


/*
*  FUNCION MAXIMO
*  Devuelve el valor máximo del array enteros
*/
int maximo(){
  int maxVal = 0;
  
  //crea un bucle para recorrer ese array
  for (int i=0; i<sizeof(enteros)/2; i++) {
    //compara cada numero del array con el maxVal
    if (maxVal < enteros[i]) {
      maxVal= enteros[i];
    }
  }
  
  return maxVal;
}


/*
*  FUNCION MINIMO
*  Devuelve el valor mínimo del array enteros
*/
int minimo(){
  int minVal = 1000;
  
  //crea un bucle para recorrer ese array
  for (int i=0; i<sizeof(enteros)/2; i++) {
    //compara cada numero del array con el minVal y si es menor actualiza la variable
    if (enteros[i] < minVal) {
      minVal = enteros[i];
    }
  }
  
  return minVal;
}

/*
*  FUNCION IMPRIMIR
*  Escribe en Serial el array enteros
*/
void imprimir(){
  for(int i=0 ; i<sizeof(enteros)/2 ; i++){
    Serial.print(enteros[i]);
    Serial.print(" ");
  }
  Serial.println();
}

/*
*  FUNCION RELLENAR
*  Inicializa el vector enteros con número aleatorios entre 1 y 1000
*/
void rellenar(){
  for(int i=0 ; i<sizeof(enteros)/2 ; i++){
    enteros[i] = random(1,1000);
  }
}
