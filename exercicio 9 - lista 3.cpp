#include <stdio.h>

int multiplicarVetor(int vetor[], int tamanho) {
    int produto = 1;
    for (int i = 0; i < tamanho; i++) {
        produto *= vetor[i];
    }
    return produto;
}

int main() {
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    printf("Digite %d valores para o vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int resultado = multiplicarVetor(vetor, tamanho);

    printf("O resultado da multiplicacao dos valores do vetor e: %d\n", resultado);

    return 0;
}

