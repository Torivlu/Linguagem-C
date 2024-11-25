#include <stdio.h>

int main() {
    // Declaração de ponteiros e variáveis
    int *p, *p1, x = 10;
    float y = 20.0;
    
    // Ponteiro p aponta para x (int)
    p = &x;
    // Imprime o conteúdo apontado por p (inteiro)
    printf("Conteudo apontado por p: %d \n", *p);
    
    // Ponteiro p1 recebe o valor de p (p1 também aponta para x)
    p1 = p;
    // Imprime o conteúdo apontado por p1 (também inteiro, pois p1 aponta para x)
    printf("Conteudo apontado por p1: %d \n", *p1);
    
    // Agora p aponta para y (float)
    // Porém p é um ponteiro para int, o que pode causar um comportamento indefinido
    // Para corrigir isso, devemos declarar p como ponteiro para float
    float *p_float;  // Novo ponteiro para float
    p_float = &y;    // Atribui o endereço de y a p_float
    // Acessando o valor de y através de p_float (usando %f, que é o especificador correto para float)
    printf("Conteudo apontado por p_float: %f \n", *p_float);

    // Acessando o valor de y de forma indireta, mas com casting correto
    printf("Conteudo apontado por p_float com casting: %f \n", *((float*)p)); // Aqui o casting é necessário
    
    return 0;
}

