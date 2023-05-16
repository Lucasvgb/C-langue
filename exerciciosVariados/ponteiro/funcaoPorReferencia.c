#include <stdio.h>

void referenciaDoCubo( int *nPtr );

int main(){

  int numero = 5;

  printf("O valor original do numero eh %d\n", numero);

  /* passa endereço do número a cubeByReference */
  referenciaDoCubo( &numero );

  printf("\n O novo valor do numero eh %d\n",numero);
}
/* Calcula cubo de *nPtr; modifica variável number em main */
void referenciaDoCubo(int *nPtr){
  *nPtr = *nPtr * *nPtr * *nPtr;
}
/* fim da função cubeByReference */

