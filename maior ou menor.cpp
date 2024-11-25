#include <stdio.h>  // Biblioteca para funções de entrada e saída (printf, scanf)

int main(){
    // Declaração das variáveis para armazenar os 3 números fornecidos pelo usuário e a variável 'maior' para armazenar o maior número.
    int numero1, numero2, numero3, maior;

    // Exibe uma linha de separação e uma mensagem informando o que o programa fará.
    printf("-------------------------------------\n");
    printf("Digite 3 números.");

    // Solicita ao usuário que digite os três números.
    scanf("%d %d %d", &numero1, &numero2, &numero3);

    // Inicializa a variável 'maior' com o valor de 'numero1', assumindo que o primeiro número seja o maior inicialmente.
    maior = numero1;

    // Compara 'numero2' com o valor atual de 'maior'. Se 'numero2' for maior, 'maior' recebe o valor de 'numero2'.
    if(numero2 > maior)
        maior = numero2;

    // Compara 'numero3' com o valor atual de 'maior'. Se 'numero3' for maior, 'maior' recebe o valor de 'numero3'.
    if(numero3 > maior)
        maior = numero3;

    // Exibe o maior número encontrado.
    printf("O maior = %d", maior);

    return 0;  // Retorna 0, indicando que o programa foi executado com sucesso.
}

