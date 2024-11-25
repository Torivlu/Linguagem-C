#include <stdio.h>

int encontrarMaiorValor(int v[], int n) {
    int maior = v[0];  
    int posicao = 0;   

    for (int i = 1; i < n; i++) {
        if (v[i] > maior) { 
            maior = v[i];   
            posicao = i;   
        }
    }

    return posicao; 
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

    int posicaoMaior = encontrarMaiorValor(vetor, n);

    printf("Maior valor: %d\n", vetor[posicaoMaior]);
    printf("Posicao do maior valor: %d\n", posicaoMaior);

    return 0;
}

