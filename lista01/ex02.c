#include <stdio.h>
#include <stdlib.h>
/*
2. Fazer um programa que recebe 3 valores inteiros do usuário e mostra o maior deles, o
menor deles, os valores pares e a média.
*/
int main(){

  int valor1,valor2,valor3;

  printf("Digite os numeros:\n");
  scanf("%d%d%d", &valor1, &valor2 ,&valor3);

  if((valor1 < valor2 && valor1 < valor3) && (valor2 > valor1 && valor2 > valor3)){
    printf("O menor valor eh: %d\n O maior Valor eh: %d\n",valor1,valor2);
  }

  else if((valor1 < valor2 && valor1 < valor3) && (valor3 > valor1 && valor3 > valor2 )){
    printf("O menor valor eh: %d\n O maior Valor eh: %d\n",valor1,valor3);
  }

  else if(( valor2 < valor1 && valor2 < valor3 ) && (valor3 > valor1 && valor3 > valor2)){
    printf("O menor valor eh: %d\n O maior Valor eh: %d\n",valor2,valor3);
  }

  else if((valor2 < valor1 && valor2 < valor3) && (valor1 > valor2 && valor1 > valor3)){
    printf("O menor valor eh: %d\n O maior Valor eh: %d\n",valor2,valor1);
  }

  else if((valor3 < valor1 && valor3 < valor2) && (valor2 > valor1 && valor2 > valor3)){
    printf("O menor valor eh: %d\n O maior Valor eh: %d\n",valor3,valor2);
  }

  return 0;
}