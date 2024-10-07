# Introduçao
fizemos um projeto com um componente chamado motor de passo serve para movimenta as peças

# Materias

- 1 arduino
- 1 motor de passo
- 1 drive
- 6 fios


![Motor de passo](motor-de-passo-arduino-img4(1).png)


# Codigo

# include <AccelStepper.h>

// converçao de graus para steps
//360° = 1024
//180° = 512
//90° = 256
//60° = 170
//45° = 128
//variavel
#define Voltas 1024
//criando objeto para controlar
AccelStepper motor (AccelStepper::FULL4WIRE,8,10,9,11);

void setup(){
// definr a velocidade maxima do motor
motor.setMaxSpeed(1000);
//definir aceleraçao maxima do motor
motor.setAcceleration(100);
 motor.moveTo(Voltas);
}

void loop(){
  
  //'fazer o motor se movimentar a 360/1024 passos
 
if  (motor.distanceToGo() == 0){
    motor.moveTo(-motor.currentPosition());
  }
  // habilitar as portas de controle do motor arduino
  motor.run();
}
