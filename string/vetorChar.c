#include <stdio.h>

int main() {
    char vetorChar[5]; // Declaração do vetor de caracteres com tamanho 5

    vetorChar[0] = 'H'; // Atribui o caractere 'H' à primeira posição do vetor
    vetorChar[1] = 'e'; // Atribui o caractere 'e' à segunda posição do vetor
    vetorChar[2] = 'l'; // Atribui o caractere 'l' à terceira posição do vetor
    vetorChar[3] = 'l'; // Atribui o caractere 'l' à quarta posição do vetor
    vetorChar[4] = 'o'; // Atribui o caractere 'o' à quinta posição do vetor

    printf("%s\n", vetorChar); // Imprime o vetor como uma string

    return 0;
}
