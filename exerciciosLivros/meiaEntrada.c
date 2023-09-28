int main(){

/*
Dar desconto somente se a pessoa "a" tiver idade par, não importando a idade da pessoa "b".
  int a,b;

  printf("Digite a primeira idade: ",a);
  scanf("%d",&a);

  printf("Digite a segunda idade: ",b);
  scanf("%d",&b);

  if(a % 2 == 0){
    printf("Ganhou Desconto\n");
  }
  else if(b % 2 == 0){
    printf("Nao ganhou");
  }
  else{
    printf("Nao atendeu nenhum dos casos");
  }
*/

//Dar desconto somente se uma das duas tiver idade ímpar.
/*
  int a,b;

  printf("Digite a primeira idade: ",a);
  scanf("%d",&a);

  printf("Digite a segunda idade: ",b);
  scanf("%d",&b);

  if(a % 2 != 0 || b % 2 != 0){
    printf("desconto");
  }
  else{
    printf("Sem desconto");
  }
*/
// Dar desconto quando somente uma delas tiver par.
  int a,b;

  printf("Digite a primeira idade: ",a);
  scanf("%d",&a);

  printf("Digite a segunda idade: ",b);
  scanf("%d",&b);

  if(a % 2 == 0 ^ b % 2 == 0){
    printf("Desconto");
  }
  else{
    printf("Sem desconto");
  }


  return 0;
}