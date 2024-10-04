# Introduçao
fizemos um projeto em que utilizamos um componente chamado piezo ele aprendemos conectar  e liga ele ao arduino
]# Materias
- 1 placa arduino
- 1 protobolt
- 3 cabo
- 1 piezo


![BuzzerMusica](BuzzerMusica.png)

#Codigo

int buzzer = 3;
#define doo 262
#define re 294
#define mi  330
#define fa  349



void setup()
{
  pinMode(buzzer, OUTPUT);
}

void loop()
{
 //a funçao de ligar tone()
  tone(buzzer,doo,500);// tocar o dó
  delay(600); // espere 600 milisegundos para toca a proxima nota
  tone(buzzer,re,500);// tocar o re 
  delay(600);
  tone(buzzer,mi,500);// tocar o mi 
  delay(600);
  tone(buzzer,fa,500);// tocar o fa 
  delay(600);
  //a funçao de desligar notone()
  noTone(buzzer);
}
