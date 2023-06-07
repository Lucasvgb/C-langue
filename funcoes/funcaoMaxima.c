#include <stdio.h>

int main (){

  int maximum(int x, int y);

  int num1;
  int num2;
  
  printf("Digite o primeiro numero: ");
  scanf("%d",&num1);
  
  printf("Digite o segundo numero: ");
  scanf("%d",&num2);

  printf("O maior numero eh: %d\n", maximum(num1,num2));

  return 0;
}

int maximum(int x, int y){

  if(x > y){
    return x;
  }

  else if(y > x){
    return y;
  }
  
  return maximum;
}