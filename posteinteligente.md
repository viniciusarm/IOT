#Semafaro Inteligente

#Introdução

este projeto foi criado para que os pedestre atravesse a rua com segurança, ele funciona da seguinte forma, ele tem um sensor de aproximaçao para detectar se ha pedestre querendo atravessa a rua esse sensor ativa quando o pedreste chega a 50 cm da faixa de pedestre entao o semaforo dos carro fica vermelho e o do pedreste fica verde

#Materias

- 7 Leds
- 1 Sensor de aproximaçao
- 1 placa de arduino nuno
- 8 cabos macho femea
- 2 cabos macho
- 7 resistos

![Semafarointeligente](semaforointeligente.png)

#Codigo


int R = 2;
int A = 3;
int V = 4;
  
int R1p = 5;
int R2p = 6;

int v1p= 7;
int v2p= 8;

long distancia (int trigger, int echo){
  // trigger porta de saida
  pinMode (trigger,OUTPUT);
  digitalWrite(trigger,LOW);
  delay(5);
  digitalWrite (trigger,HIGH);
  delay(10);
  digitalWrite(trigger,LOW);
  //echo porta de entrada
  pinMode(echo,INPUT);
  
  return pulseIn(echo,HIGH);
  
}
  
void setup()
{
 pinMode (R,OUTPUT);
 pinMode (A,OUTPUT);
 pinMode (V,OUTPUT);
 
 pinMode (R1p,OUTPUT);
 pinMode (R2p,OUTPUT);
  
 pinMode (v1p,OUTPUT);
  pinMode(v2p,OUTPUT);
}

void loop()
{
  
  //transforma o valor recebido para cm
  int cm =0.01723* distancia (13,13);
  
  	  
  
   if(cm<=50){ 
    digitalWrite (R,HIGH);
    digitalWrite (v1p,HIGH);
    digitalWrite (v2p,HIGH);
     digitalWrite(V,LOW);
    digitalWrite(R1p,LOW);
    digitalWrite(R2p,LOW);
  }
  
  else if (cm>50){
  digitalWrite(V,HIGH);
    digitalWrite(R1p,HIGH);
    digitalWrite(R2p,HIGH);
     digitalWrite (R,LOW);
    digitalWrite (v1p,LOW);
    digitalWrite (v2p,LOW);
  }
}



