#include <stdio.h>
#include <locale.h>

int main() {
    // Define a localidade para exibir mensagens em português
    setlocale(LC_ALL, "Portuguese");

    printf("-------------- Início do Programa --------------------\n\n");

    // Declaração de variáveis de diferentes tipos
    int x;        // variável do tipo inteiro
    double y;     // variável do tipo double
    char z;       // variável do tipo char

    // Ponteiros para armazenar os endereços de memória das variáveis
    int *p1;
    double *p2;
    char *p3;

    // Inicializa as variáveis com valores
    x = 10;
    y = 5.8;
    z = 'A';

    // Atribui os endereços das variáveis às variáveis ponteiro
    p1 = &x;
    p2 = &y;
    p3 = &z;

    // Usando os ponteiros para acessar os valores das variáveis e imprimi-los
    printf("x = %d\n\n", *p1);   // *p1 desreferencia o ponteiro p1, retornando o valor de x
    printf("y = %.1f\n\n", *p2); // *p2 desreferencia o ponteiro p2, retornando o valor de y
    printf("z = %c\n\n", *p3);   // *p3 desreferencia o ponteiro p3, retornando o valor de z

    printf("---------- Fim do Programa ----------\n\n");

    return 0;
}

