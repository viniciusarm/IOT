//biblioteca psra conexoes serial do sensor
#include <SoftwareSerial.h>
//variavel do sensor
int sensor = A0;


void setup()
{
 pinMode (sensor, INPUT);
  // utilizando o monitor serial
  Serial.begin(9600);
}

void loop()
{
  //Guardar o Valor lido pelo sensor
  int umidade = analogRead(sensor);
  //imprimindo o valor lido
  Serial.print ("Umidade do solo");
  Serial.println(umidade);
  delay(1000); // espere
  
  if(umidade<300){
  Serial.print(" Solo Seco");
}
  else if (umidade<500){
  Serial.print(" Solo Ideal");
  }
  if(umidade>500){
  Serial.print(" Solo UMido ");
               }
               }
               