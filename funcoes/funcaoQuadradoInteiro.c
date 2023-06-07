#include <stdio.h>

int calculaQuadrado(int z);

int main (){

for(int i = 1; i <= 10; i++){
  printf("%d , ", calculaQuadrado(i));
}

  return 0;
}

int calculaQuadrado(int z){

  return z * z;
}