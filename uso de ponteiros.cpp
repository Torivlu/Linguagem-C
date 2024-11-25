#include <stdio.h>

int main() {
    // Declara uma vari�vel int contendo o valor 10
    int c = 10;
    // Declara um ponteiro para int
    int *p;
    // Atribui ao ponteiro o endere�o da vari�vel int
    p = &c;
    // Imprime o conte�do apontado por p (deve ser *p)
    printf("Conteudo apontado por p: %d \n", *p); // 10
    // Atribui um novo valor � posi��o de mem�ria apontada por p
    *p = 12;
    // Imprime o conte�do apontado por p (agora � 12)
    printf("Conteudo apontado por p: %d \n", *p); // 12
    // Imprime o conte�do da vari�vel c (tamb�m 12, pois p aponta para c)
    printf("Conteudo de c: %d \n", c); // 12

    return 0;
}

