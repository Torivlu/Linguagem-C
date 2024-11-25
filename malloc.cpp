#include <stdio.h>   // Biblioteca para entrada e saída (printf, scanf)
#include <stdlib.h>  // Biblioteca para funções de alocação dinâmica (malloc, free)

int main() {
    // Declaração da variável 'n' que será o tamanho do vetor
    int n;

    // Solicita ao usuário o valor de 'n', que define o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        // Se a entrada não for um número ou o número for menor ou igual a zero, exibe mensagem de erro
        printf("Entrada inválida. O tamanho do vetor deve ser um número inteiro positivo.\n");
        return -1;
    }

    // Aloca dinamicamente memória para o vetor de inteiros com 'n' elementos
    int *vetor = malloc(sizeof(int) * n);

    // Verifica se a alocação de memória foi bem-sucedida
    if (vetor == NULL) {
        // Se a alocação falhou, imprime uma mensagem de erro e retorna -1
        printf("Erro na alocacao de memoria.\n");
        return -1;
    }

    // Laço que inicializa o vetor de frente para trás, com valores de 1 até n
    for (int i = 0; i < n; i++) {
        vetor[i] = i + 1;  // Atribui valores de 1 a n ao vetor
    }

    // Laço que imprime o conteúdo do vetor da frente para trás
    printf("Conteudo do vetor: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);  // Imprime cada valor armazenado em 'vetor[i]'
    }
    printf("\n");

    // Libera a memória alocada para o vetor
    free(vetor);

    // Retorna 0 indicando que o programa foi executado com sucesso
    return 0;
}

