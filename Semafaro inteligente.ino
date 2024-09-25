// C++ code
//biblioteca do LCD

int R = 2;
int A = 3;
int V = 4;
  
int R1p = 5;
int R2p = 6;

int v1p= 7;
int v2p= 8;

// metedo para captura a distancia
// retorna um numero quebrado longo
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
  else{
   digitalWrite(V,HIGH);
    digitalWrite(R1p,HIGH);
    digitalWrite(R2p,HIGH); }
  
   
   
  
 
 
}