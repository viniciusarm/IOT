#include <Servo.h>
//criando objeto do tipo Servo Motor
/*criando um objeto do tipo Servo motor
para poder usar as funçoes de controle do equipamento (servo motor)*/
int servo = 2;
// variavel para posiçao do motor
int posicao = 0;
Servo objetoservo;
int botao = 4;
int botaovoltar = 7;
void setup()
{
	// a inicializaçao do servo
  objetoservo.attach(servo);
  //servo começa na posiçao 0
  objetoservo.write(0);
  // definir botao como entrada
  pinMode(botao,INPUT);
}

void loop()
{
 // se precionar o botao, gire o servo a 1°
  if(digitalRead(botao) == HIGH && posicao<180){
    posicao++;
    //Mande o moto para a nova posiçao
    objetoservo.write(posicao);
    delay(1);//agurade 1 segundo a proxima leitura
  }
   if(digitalRead(botaovoltar) == HIGH && posicao>0){
    posicao--;
    //Mande o moto para a nova posiçao
    objetoservo.write(posicao);
    delay(1);//agurade 1 segundo a proxima leitura
  }
  
}