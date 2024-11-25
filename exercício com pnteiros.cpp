#include <stdio.h>
#include <locale.h>

int main() {
    // Define a localidade para exibir mensagens em portugu�s
    setlocale(LC_ALL, "Portuguese");

    printf("-------------- In�cio do Programa --------------------\n\n");

    // Declara��o de vari�veis de diferentes tipos
    int x;        // vari�vel do tipo inteiro
    double y;     // vari�vel do tipo double
    char z;       // vari�vel do tipo char

    // Ponteiros para armazenar os endere�os de mem�ria das vari�veis
    int *p1;
    double *p2;
    char *p3;

    // Inicializa as vari�veis com valores
    x = 10;
    y = 5.8;
    z = 'A';

    // Atribui os endere�os das vari�veis �s vari�veis ponteiro
    p1 = &x;
    p2 = &y;
    p3 = &z;

    // Usando os ponteiros para acessar os valores das vari�veis e imprimi-los
    printf("x = %d\n\n", *p1);   // *p1 desreferencia o ponteiro p1, retornando o valor de x
    printf("y = %.1f\n\n", *p2); // *p2 desreferencia o ponteiro p2, retornando o valor de y
    printf("z = %c\n\n", *p3);   // *p3 desreferencia o ponteiro p3, retornando o valor de z

    printf("---------- Fim do Programa ----------\n\n");

    return 0;
}

