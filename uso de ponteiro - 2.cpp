#include <stdio.h>

int main() {
    // Declara��o de ponteiros e vari�veis
    int *p, *p1, x = 10;
    float y = 20.0;
    
    // Ponteiro p aponta para x (int)
    p = &x;
    // Imprime o conte�do apontado por p (inteiro)
    printf("Conteudo apontado por p: %d \n", *p);
    
    // Ponteiro p1 recebe o valor de p (p1 tamb�m aponta para x)
    p1 = p;
    // Imprime o conte�do apontado por p1 (tamb�m inteiro, pois p1 aponta para x)
    printf("Conteudo apontado por p1: %d \n", *p1);
    
    // Agora p aponta para y (float)
    // Por�m p � um ponteiro para int, o que pode causar um comportamento indefinido
    // Para corrigir isso, devemos declarar p como ponteiro para float
    float *p_float;  // Novo ponteiro para float
    p_float = &y;    // Atribui o endere�o de y a p_float
    // Acessando o valor de y atrav�s de p_float (usando %f, que � o especificador correto para float)
    printf("Conteudo apontado por p_float: %f \n", *p_float);

    // Acessando o valor de y de forma indireta, mas com casting correto
    printf("Conteudo apontado por p_float com casting: %f \n", *((float*)p)); // Aqui o casting � necess�rio
    
    return 0;
}

