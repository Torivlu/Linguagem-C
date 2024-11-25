#include <stdio.h>  // Biblioteca para fun��es de entrada e sa�da (printf, scanf)

int main(){
    // Declara��o das vari�veis para armazenar os 3 n�meros fornecidos pelo usu�rio e a vari�vel 'maior' para armazenar o maior n�mero.
    int numero1, numero2, numero3, maior;

    // Exibe uma linha de separa��o e uma mensagem informando o que o programa far�.
    printf("-------------------------------------\n");
    printf("Digite 3 n�meros.");

    // Solicita ao usu�rio que digite os tr�s n�meros.
    scanf("%d %d %d", &numero1, &numero2, &numero3);

    // Inicializa a vari�vel 'maior' com o valor de 'numero1', assumindo que o primeiro n�mero seja o maior inicialmente.
    maior = numero1;

    // Compara 'numero2' com o valor atual de 'maior'. Se 'numero2' for maior, 'maior' recebe o valor de 'numero2'.
    if(numero2 > maior)
        maior = numero2;

    // Compara 'numero3' com o valor atual de 'maior'. Se 'numero3' for maior, 'maior' recebe o valor de 'numero3'.
    if(numero3 > maior)
        maior = numero3;

    // Exibe o maior n�mero encontrado.
    printf("O maior = %d", maior);

    return 0;  // Retorna 0, indicando que o programa foi executado com sucesso.
}

