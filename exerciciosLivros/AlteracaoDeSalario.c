// Capítulo 07 - Decisão - Salário
int main(){

  float salario;
  float salario20 = 2000;
  float salario18 = 2100;
  float salario15 = 5000;
  float salario12 = 8000;
  float salario10;

  printf("Digite seu salario: ", salario);
  scanf("%f",&salario);

  if(salario < salario20 ){
    salario  = salario * 0.20;
  }

   else if(salario20 < salario18){
    salario  = salario * 1.18;

  }
  else if(salario15){

  }




  return 0;
}