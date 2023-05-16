#include <stdio.h>

size_t getSize( float *ptr ); 

int main(){

  float array [20];
  printf("O numero de bytes no array eh %d\nO numero de bytes retornados por getSize eh %d\n",sizeof(array), getSize(array));

  return 0;
}

size_t getSize(float *ptr){
  return sizeof(ptr);
}