#include <stdio.h>  // Biblioteca para fun��es de entrada e sa�da (printf, scanf)
#include <math.h>   // Biblioteca para fun��es matem�ticas (n�o usada neste c�digo)

int main(){
    int numero, i, soma=0;  // Declara��o das vari�veis: 'numero' para o n�mero inserido pelo usu�rio,
                             // 'i' para controle do la�o de repeti��o, e 'soma' (n�o utilizada neste c�digo).

    // Imprime uma linha de separa��o no console.
    printf("-------------------------------------\n");

    // Solicita ao usu�rio para digitar um n�mero.
    printf("Digite 1 n�mero.");
    scanf("%d", &numero);  // L� o n�mero inserido pelo usu�rio e armazena na vari�vel 'numero'.

    // La�o 'for' para percorrer todos os n�meros de 1 at� o valor de 'numero'.
    for(i = 1; i <= numero; i++) {
        
        // Verifica se o n�mero 'i' � par. O n�mero � par se o resto da divis�o de 'i' por 2 for zero.
        if(i % 2 == 0)
            
            // Se 'i' for par, verifica se 'i' n�o � m�ltiplo de 7.
            if(i % 7 != 0)
                
                // Se as condi��es acima forem verdadeiras, imprime que o n�mero 'i' � par, mas n�o m�ltiplo de 7.
                printf("O n�mero %d � par\n", i);
    }

    return 0;  // Retorna 0, indicando que o programa foi executado com sucesso.
}

