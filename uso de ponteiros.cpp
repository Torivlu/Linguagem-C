#include <stdio.h>

int main() {
    // Declara uma variável int contendo o valor 10
    int c = 10;
    // Declara um ponteiro para int
    int *p;
    // Atribui ao ponteiro o endereço da variável int
    p = &c;
    // Imprime o conteúdo apontado por p (deve ser *p)
    printf("Conteudo apontado por p: %d \n", *p); // 10
    // Atribui um novo valor à posição de memória apontada por p
    *p = 12;
    // Imprime o conteúdo apontado por p (agora é 12)
    printf("Conteudo apontado por p: %d \n", *p); // 12
    // Imprime o conteúdo da variável c (também 12, pois p aponta para c)
    printf("Conteudo de c: %d \n", c); // 12

    return 0;
}

