  // Capítulo 07 - Decisão
int main (){
  /*
  int num1,num2,num3;
  scanf("%d%d%d", &num1,&num2,&num3);

  if(num1 < num2 && num1 < num3){
    printf("Numero %d eh menor");
  }
  else if(num2 < num1 && num2 < num3){
    printf("Numero %d eh menor");
  }
  else if(num3 < num1 && num3 < num2){
    printf("Numero %d eh menor");

  }
  */
  // Agora uma forma mais elegante de se fazer isso.
  int num1,num2,num3,menor;
  scanf("%d%d%d", &num1,&num2,&num3);

  menor = num1;
  if(num2 < menor){
    menor = num2;
  }
  if(num3 < menor){
    menor = num3;
  }
  printf("%d", menor);
  
  return 0;
}