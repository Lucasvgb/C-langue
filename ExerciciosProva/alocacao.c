#include <stdio.h>
#include <stdlib.h>

// Função para verificar a paridade
int Paridade(int num) {
    return (num % 2 == 0) ? 1 : 0;
}

int main() {
    int tamanho;

    // Recebe o tamanho do array
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    // Verifica se o tamanho é válido
    if (tamanho <= 0) {
        printf("Tamanho inválido. O programa será encerrado.\n");
        return 1;
    }

    // Aloca memória dinamicamente para entrada e saida
    int *entrada = (int*)malloc(tamanho * sizeof(int));
    int *saida = (int*)malloc(tamanho * sizeof(int));

    // Lê e armazena números em entrada e preenche saida com a paridade
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &entrada[i]);
        saida[i] = Paridade(entrada[i]);
    }

    // Imprime os números armazenados em entrada
    printf("Números armazenados em entrada: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d", entrada[i]);
        if (i < tamanho - 1) {
            printf(", ");
        }
    }
    printf("\n");

    // Imprime os números armazenados em saida
    printf("Números armazenados em saida: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d", saida[i]);
        if (i < tamanho - 1) {
            printf(", ");
        }
    }
    printf("\n");

    // Libera a memória alocada dinamicamente
    free(entrada);
    free(saida);

    return 0;
}
