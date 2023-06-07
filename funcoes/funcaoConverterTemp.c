#include <stdio.h>

int main(){

  float converterTemperatura(float tempCelsius);
  float celsius, fahrenheit;

  printf("Digite a temperatura em Celsius: ");
  scanf("%f", &celsius);

  fahrenheit = converterTemperatura(celsius);

  printf("A temperatura em %2.f",fahrenheit);
  
  return 0;
}

float converterTemperatura(float tempCelsius){

  float tempFahrenheit = (tempCelsius * 1.8) + 32;

  return tempFahrenheit;
}