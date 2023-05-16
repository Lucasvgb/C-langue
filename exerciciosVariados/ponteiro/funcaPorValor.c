#include <stdio.h>

int cuboDeUmaVariavel( int n );

int main(){

  int numero = 5;

  printf("O valor original do numrero eh %d\n",numero);

  numero = cuboDeUmaVariavel( numero );

  printf("\nO novo valor de numero eh %d\n", numero);

  return 0;
}
/* calcula e retorna cubo do argumento inteiro */
int cuboDeUmaVariavel( int n ){
  return n * n * n;
}