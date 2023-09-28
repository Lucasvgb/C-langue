int main(){
  /*
  Faça um programa que receba as horas nos formado 24hrs e imprima "escuro", caso esteja entre 18 e 5. Os válidos para hora consistem do intervalo[0,23].
  */
  int horas;

  printf("Digite as horas: " , horas);
  scanf("%d" , &horas);

  if(horas >= 18 || horas <= 5){
    printf("escuro");
  } 
  else{
    printf("claro");
  }

  return 0;
}