#include <stdio.h>

int main() {
    int linhas;

    printf("Digite o número de linhas do triângulo: ");
    scanf("%d", &linhas);

    for (int i = 1; i <= linhas; i++) {
        // Espaços em branco à esquerda
        for (int espacos = 1; espacos <= linhas - i; espacos++) {
            printf(" ");
        }

        // Asteriscos
        for (int asteriscos = 1; asteriscos <= 2 * i - 1; asteriscos++) {
            printf("*");
        }

        // Mova para a próxima linha
        printf("\n");
    }

    return 0;
}
