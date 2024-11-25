#include <stdio.h>  // Biblioteca para fun��es de entrada e sa�da (printf, scanf)

int main(){
    int i = 1;  // Vari�vel de controle 'i', inicializada com 1, utilizada para controlar o la�o de repeti��o
    float nota1, nota2, nota3, media;  // Declara��o das vari�veis 'nota1', 'nota2', 'nota3' para armazenar as notas dos alunos
                                        // e 'media' para armazenar a m�dia calculada.

    // Exibe uma linha de separa��o e uma mensagem de introdu��o do programa.
    printf("-------------------------------------\n");
    printf("C�lculo de M�dia de Alunos.");
    
    // La�o 'for' que permite realizar o c�lculo da m�dia m�ltiplas vezes at� que o usu�rio decida sair
    // O la�o continua enquanto a vari�vel 'i' for maior que 0.
    for( ; i > 0; ){
        // Solicita ao usu�rio que insira as 3 notas.
        printf("\nDigite a Nota 1, 2 e 3: ");
        scanf("%f %f %f", &nota1, &nota2, &nota3);  // L� as 3 notas inseridas pelo usu�rio.

        printf("-------------------------------------\n");

        // Calcula a m�dia das 3 notas.
        media = (nota1 + nota2 + nota3) / 3;
        // Exibe a m�dia calculada com 2 casas decimais.
        printf("\nM�dia = %.2f\n\n", media);

        // Condicional que verifica a situa��o do aluno com base na m�dia:
        if (media >= 7)  // Se a m�dia for maior ou igual a 7, o aluno � aprovado.
            printf("Aprovado.");
        else if (media >= 4)  // Se a m�dia for maior ou igual a 4, mas menor que 7, o aluno est� em recupera��o.
            printf("Recupera��o.");
        else  // Se a m�dia for menor que 4, o aluno � reprovado.
            printf("Reprovado.");

        printf("\n");

        // Pergunta ao usu�rio se deseja continuar calculando m�dias ou sair.
        printf("\nDigite 1 para continuar ou -1 para sair: ");
        scanf("%d", &i);  // L� a entrada do usu�rio. Se o valor for 1, o la�o continua; se for -1, o la�o termina.
    }
    
    return 0;  // Retorna 0, indicando que o programa foi executado com sucesso.
}

