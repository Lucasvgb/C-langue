#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void printList(struct Node *start) {
    printf("inicio => ");
    while (start != NULL) {
        printf("%d => ", start->data);
        start = start->next;
    }
    printf("NULL\n");
}

int main() {
    int numLists;
    printf("Quantas listas deseja criar?\n");
    scanf("%d", &numLists);

    struct Node **lists = (struct Node **)malloc(numLists * sizeof(struct Node *));
    for (int i = 0; i < numLists; i++) {
        lists[i] = NULL; // Inicializa cada lista como vazia
    }

    char choice;
    do {
        int value, listIndex;
        printf("Qual valor deseja inserir em qual lista (forma X Y)?\n");
        scanf("%d %d", &value, &listIndex);

        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->next = lists[listIndex];
        lists[listIndex] = newNode;

        // Imprime o estado atual de todas as listas
        for (int i = 0; i < numLists; i++) {
            printf("Lista %d: ", i);
            printList(lists[i]);
        }

        printf("Deseja terminar? (S/N)\n");
        scanf(" %c", &choice); // Espaço antes do %c para consumir o caractere de nova linha residual

    } while (choice != 'S' && choice != 's');

    // Libera a memória alocada
    for (int i = 0; i < numLists; i++) {
        struct Node *current = lists[i];
        while (current != NULL) {
            struct Node *temp = current;
            current = current->next;
            free(temp);
        }
    }
    free(lists);

    return 0;
}
