#include <stdio.h>
#include <stdlib.h>

/*Exercicio numero 02
int main(){

  int max = 100;
  int soma = 0;
  for(int i = 1; i <= max ; i++ ){
    soma = soma + i;
    printf("i: %d\n",soma);
  }
  return 0;
}
*/

/*Exercício 3: Escreva um programa em C que use um loop for para imprimir os números pares de 2 a 20.
int main(){

  int max = 20;
  for(int i = 2; i <= max; i++){
    if(i % 2 == 0){
      printf("%d\n",i);
    }
  }

  return 0;
}
*/

/*Exercício 4: Escreva um programa em C que use um loop for para calcular o fatorial de um número fornecido pelo usuário.
int main()
{

  int num, fatorial = 1;
  printf("Dgite um numero: ", num);
  scanf("%d", &num);

  for (int i = 1; i <= num; i++)
  {
    fatorial *= i;
  }
  printf("Fatorial: %d", fatorial);

  return 0;
}
*/

/*Exercício 5: Escreva um programa em C que use um loop for para imprimir os elementos de um array de inteiros.
int main(){

   int array[]= {0,1,2,3,5};
   int tamanho = sizeof(array) / sizeof(array[0]);

   for(int i = 0; i < tamanho; i++){
      printf("array[%d]: %d\n",i, array[i]);
   }
   return 0;
}
*/

/*Exercício 8: Escreva um programa em C que use um loop for para imprimir os números de 1 a 100, mas substitua os múltiplos de 3 por "Fizz" e os múltiplos de 5 por "Buzz". Para números que são múltiplos de ambos (3 e 5), imprima "FizzBuzz".

int main(){

   int numero = 100;
   for(int i = 1; i <= numero; i++){
      if(i % 3 ==0 && i % 5 == 0){
         printf("FizzBuzz\n");
      }
      else if(i % 3 == 0){
         printf("Fizz\n");
      }
      else if(i % 5 == 0){
         printf("Buzz\n");
      }
      else{
         printf("%d\n",i);
      }
   }
   return 0;
}
*/

//Exercício 12: Escreva um programa em C que solicite ao usuário um número inteiro positivo e, em seguida, exiba a tabuada desse número de 1 a 10.
/*
int main(){

   int numero;

   printf("Digite um numero: ",numero);
   scanf("%d",&numero);

   for(int i = 1; i <= 10; i++){
      int soma = i * numero;
      printf("%d X %d = %d\n",i,numero,soma);
   }
}
*/

/*
Exercício 13: Escreva um programa em C que solicite ao usuário um número inteiro positivo e, em seguida, calcule e imprima a soma de todos os números pares de 1 até o número fornecido.

int main(){

   int numero;
   int soma = 0;

   printf("Digite um numero: ");
   scanf("%d",&numero);

   if(numero >= 0){
      for(int i = 2; i <= numero; i = i + 2){
            soma = soma + i;
      }
      printf("A soma de todos os numeros pares eh: %d", soma);
   }
   else{
      printf("Digite um numero inteiro positivo!");
   }

   return 0;
}
*/

/*
Exercício 17: Escreva um programa em C que solicite ao usuário um número inteiro positivo e, em seguida, calcule e imprima a média dos números ímpares de 1 até o número fornecido.

int main(){

   int numero;
   int soma = 0;
   float media;
   int quantidadeNumerosImpares = 0;

   printf("Digite um numero: ");
   scanf("%d",&numero);

   if(numero >= 0){
      for(int i = 1; i <= numero; i = i + 2){
         soma = soma + i;
         quantidadeNumerosImpares++;
      }
      if(quantidadeNumerosImpares > 0){
         media = (float)soma / quantidadeNumerosImpares;
         printf("A média dos números ímpares de 1 até %d é: %.2f\n", numero, media);
      }
      else{
         printf("Não há números ímpares no intervalo de 1 até %d.\n", numero);
      }
   }
   else{
      printf("Digite um numero inteiro positivo!");
   }
  
   return 0;
}
*/

// Exercício 18: Escreva um programa em C que solicite ao usuário um número inteiro positivo e, em seguida, calcule e imprima a soma dos dígitos desse número. Por exemplo, se o usuário inserir 12345, o programa deve calcular a soma 1 + 2 + 3 + 4 + 5 e imprimir o resultado.

int main(){

   int numero;
   int soma = 0;
   int digito;

   printf("Digite um numero positivo: ");
   scanf("%d",&numero);

   if(numero >= 0){
      while(numero > 0){
         digito = numero % 10; // Pega o último dígito
         soma += digito; // Soma o dígito à soma total
         numero /= 10; // Remove o último dígito
      }
      printf("A soma eh: %d", soma);
   }
   else {
      printf("Numero NEGATIVO, digite um numero valido");
   }

}