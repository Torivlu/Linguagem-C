#include <stdio.h>   // Biblioteca para fun��es de entrada e sa�da (printf, etc.)
#include <stdlib.h>  // Biblioteca para fun��es de aloca��o din�mica (malloc, free)

int main() {
    int *n;  // Declara��o de um ponteiro para inteiro, mas sem alocar mem�ria para ele.

    *n = 507;  // Tentativa de atribuir o valor 507 � mem�ria apontada por 'n', mas 'n' ainda n�o foi inicializado.

    printf("%p\n", *n);  // Tenta imprimir o valor armazenado em 'n' como um endere�o de mem�ria. Isso est� incorreto.
                         // O correto seria imprimir o endere�o de mem�ria de 'n' utilizando '%p', e n�o '*n'.

    return 0;  // Retorno do valor 0 indicando que o programa foi executado com sucesso.
}

