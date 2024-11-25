#include <stdio.h>   // Biblioteca para entrada e sa�da (printf, scanf)
#include <stdlib.h>  // Biblioteca para fun��es de aloca��o din�mica (malloc, free)

int main() {
    // Declara��o da vari�vel 'n' que ser� o tamanho do vetor
    int n;

    // Solicita ao usu�rio o valor de 'n', que define o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        // Se a entrada n�o for um n�mero ou o n�mero for menor ou igual a zero, exibe mensagem de erro
        printf("Entrada inv�lida. O tamanho do vetor deve ser um n�mero inteiro positivo.\n");
        return -1;
    }

    // Aloca dinamicamente mem�ria para o vetor de inteiros com 'n' elementos
    int *vetor = malloc(sizeof(int) * n);

    // Verifica se a aloca��o de mem�ria foi bem-sucedida
    if (vetor == NULL) {
        // Se a aloca��o falhou, imprime uma mensagem de erro e retorna -1
        printf("Erro na alocacao de memoria.\n");
        return -1;
    }

    // La�o que inicializa o vetor de frente para tr�s, com valores de 1 at� n
    for (int i = 0; i < n; i++) {
        vetor[i] = i + 1;  // Atribui valores de 1 a n ao vetor
    }

    // La�o que imprime o conte�do do vetor da frente para tr�s
    printf("Conteudo do vetor: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);  // Imprime cada valor armazenado em 'vetor[i]'
    }
    printf("\n");

    // Libera a mem�ria alocada para o vetor
    free(vetor);

    // Retorna 0 indicando que o programa foi executado com sucesso
    return 0;
}

