#include <stdio.h>  // Biblioteca para funções de entrada e saída (printf, scanf)
#include <math.h>   // Biblioteca para funções matemáticas (não usada neste código)

int main(){
    int numero, i, soma=0;  // Declaração das variáveis: 'numero' para o número inserido pelo usuário,
                             // 'i' para controle do laço de repetição, e 'soma' (não utilizada neste código).

    // Imprime uma linha de separação no console.
    printf("-------------------------------------\n");

    // Solicita ao usuário para digitar um número.
    printf("Digite 1 número.");
    scanf("%d", &numero);  // Lê o número inserido pelo usuário e armazena na variável 'numero'.

    // Laço 'for' para percorrer todos os números de 1 até o valor de 'numero'.
    for(i = 1; i <= numero; i++) {
        
        // Verifica se o número 'i' é par. O número é par se o resto da divisão de 'i' por 2 for zero.
        if(i % 2 == 0)
            
            // Se 'i' for par, verifica se 'i' não é múltiplo de 7.
            if(i % 7 != 0)
                
                // Se as condições acima forem verdadeiras, imprime que o número 'i' é par, mas não múltiplo de 7.
                printf("O número %d é par\n", i);
    }

    return 0;  // Retorna 0, indicando que o programa foi executado com sucesso.
}

