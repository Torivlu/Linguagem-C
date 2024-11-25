#include <stdio.h>   // Biblioteca para fun��es de entrada e sa�da (printf, etc.)
#include <stdlib.h>  // Biblioteca para fun��es de aloca��o din�mica de mem�ria (malloc, free)

int main() {
    int *n;  // Declara��o de um ponteiro para inteiro, mas ainda n�o aponta para nenhuma �rea de mem�ria v�lida.
    
    // Aloca dinamicamente mem�ria suficiente para armazenar um �nico inteiro.
    n = malloc(sizeof(int));
    
    // Verifica se a aloca��o de mem�ria foi bem-sucedida.
    if(n != NULL) {
        // A aloca��o foi bem-sucedida, ent�o podemos acessar o endere�o de mem�ria alocado por 'n'.
        *n = 507;  // Atribui o valor 507 ao endere�o de mem�ria apontado por 'n'.

        // Imprime o valor armazenado no endere�o de mem�ria apontado por 'n'.
        printf("%d\n", *n);  // O valor 507 ser� impresso na tela.
        
        // Libera a mem�ria alocada dinamicamente para evitar vazamento de mem�ria.
        free(n);
    } 
    else {
        // Caso a aloca��o de mem�ria tenha falhado, o ponteiro 'n' ser� NULL.
        printf("Erro na alocacao.\n");  // Mensagem de erro ser� exibida.
    }
    
    return 0;  // O programa terminou com sucesso e retorna 0.
}

