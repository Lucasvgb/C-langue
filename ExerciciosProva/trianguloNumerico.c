#include <stdio.h>

int main() {
    int totallinhas1;

    // Solicita ao usuário o número de linhas
    printf("Digite o numero1 de linhas do triangulo: ");
    scanf("%d", &totallinhas1);

    // Loop para imprimir o triângulo
    for (int linha = 1; linha <= totallinhas1; linha++) {
        int numero1 = linha;

        // Loop para imprimir os números na linha atual
        for (int coluna = 1; coluna <= linha; coluna++) {
            printf("%d ", numero1);
            numero1--;
        }

        printf("\n"); // Vá para a próxima linha
    }

    printf("\n");
    printf("\n");
    
    int totallinhas;

    // Solicita ao usuário o número de linhas
    printf("Digite o numero1 de linhas do triangulo: ");
    scanf("%d", &totallinhas);

    int numero1Inicial = totallinhas + 1; // Define o número inicial

    // Loop para imprimir o triângulo
    for (int linha = totallinhas1; linha >= 1; linha--) {
        int numero = numero1Inicial;

        // Loop para imprimir os números na linha atual
        for (int coluna = 1; coluna <= linha; coluna++) {
            printf("%d ", numero);
            numero++;
        }

        printf("\n"); // Vá para a próxima linha
        numero1Inicial--; // Atualiza o número inicial para a próxima linha
    }


    return 0;
}
