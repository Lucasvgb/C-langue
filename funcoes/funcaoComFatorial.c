#include <stdio.h>

int main(){

  int fatorial(int numero);
  int numero;

  printf("Digite um numero nao negativo:");
  scanf("%d", &numero);

  printf("Fatorial = %d",(fatorial(numero)));
  return 0;
}

int fatorial (int numero){

  int f = 1;
  
  for(int i = 1; i <= numero; i++){
    f *= i;
  }
  
  return f;
}