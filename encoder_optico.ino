const int sensorPin = 9;
long contador = 0;

void setup(){
	Serial.begin(9600);
  	pinMode(sensorPin , INPUT);  //definir pin como entrada
}

void loop(){
	int value = 0;
  	value = digitalRead(sensorPin);  //lectura digital de Pin
  	
  if(value==LOW){
  	Serial.print("activacion de contador -->");
    contador=contador+1;
    Serial.println(contador);
  }
  delay(10);
}
