#include <stdio.h>

int somarValores(int v[], int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += v[i];
    }
    return soma;
}

int main() {
    int n;
    printf("Digite o numero de elementos: ");
    scanf("%d", &n);

    int vetor[n]; 

    
    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < n; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

   
    int soma = somarValores(vetor, n);

   
    float media = (float)soma / n;

   
    printf("Soma dos valores: %d\n", soma);
    printf("Media dos valores: %.2f\n", media);

    return 0;
}

