#include <stdio.h>

int main(){

  int areaRetangulo(int b, int h);

  int b1 , h1;
  int b2 , h2;

  printf("Digite a base e a altura do primeiro Retangulo: ");
  scanf("%d%d\n", &b1 , &h1);

  printf("Digite a base e a altura do segundo Retangulo: ");
  scanf("%d%d\n", &b2 , &h2);

  if(areaRetangulo(b1,h1) > areaRetangulo(b2,h2)){
    printf("Primeiro Retangulo eh maior");
  }
  else{
    printf("Segundo Retaugulo eh maior");
  }

  return 0;
}

int areaRetangulo(int lado , int altura){
  return  lado * altura;
}