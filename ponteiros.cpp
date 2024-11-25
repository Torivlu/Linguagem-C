#include <stdio.h>   // Biblioteca para funções de entrada e saída (printf, etc.)
#include <stdlib.h>  // Biblioteca para funções de alocação dinâmica (malloc, free)

int main() {
    int *n;  // Declaração de um ponteiro para inteiro, mas sem alocar memória para ele.

    *n = 507;  // Tentativa de atribuir o valor 507 à memória apontada por 'n', mas 'n' ainda não foi inicializado.

    printf("%p\n", *n);  // Tenta imprimir o valor armazenado em 'n' como um endereço de memória. Isso está incorreto.
                         // O correto seria imprimir o endereço de memória de 'n' utilizando '%p', e não '*n'.

    return 0;  // Retorno do valor 0 indicando que o programa foi executado com sucesso.
}

