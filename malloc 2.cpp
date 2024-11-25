#include <stdio.h>   // Biblioteca para funções de entrada e saída (printf, etc.)
#include <stdlib.h>  // Biblioteca para funções de alocação dinâmica de memória (malloc, free)

int main() {
    int *n;  // Declaração de um ponteiro para inteiro, mas ainda não aponta para nenhuma área de memória válida.
    
    // Aloca dinamicamente memória suficiente para armazenar um único inteiro.
    n = malloc(sizeof(int));
    
    // Verifica se a alocação de memória foi bem-sucedida.
    if(n != NULL) {
        // A alocação foi bem-sucedida, então podemos acessar o endereço de memória alocado por 'n'.
        *n = 507;  // Atribui o valor 507 ao endereço de memória apontado por 'n'.

        // Imprime o valor armazenado no endereço de memória apontado por 'n'.
        printf("%d\n", *n);  // O valor 507 será impresso na tela.
        
        // Libera a memória alocada dinamicamente para evitar vazamento de memória.
        free(n);
    } 
    else {
        // Caso a alocação de memória tenha falhado, o ponteiro 'n' será NULL.
        printf("Erro na alocacao.\n");  // Mensagem de erro será exibida.
    }
    
    return 0;  // O programa terminou com sucesso e retorna 0.
}

