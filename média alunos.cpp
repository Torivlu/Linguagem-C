#include <stdio.h>  // Biblioteca para funções de entrada e saída (printf, scanf)

int main(){
    int i = 1;  // Variável de controle 'i', inicializada com 1, utilizada para controlar o laço de repetição
    float nota1, nota2, nota3, media;  // Declaração das variáveis 'nota1', 'nota2', 'nota3' para armazenar as notas dos alunos
                                        // e 'media' para armazenar a média calculada.

    // Exibe uma linha de separação e uma mensagem de introdução do programa.
    printf("-------------------------------------\n");
    printf("Cálculo de Média de Alunos.");
    
    // Laço 'for' que permite realizar o cálculo da média múltiplas vezes até que o usuário decida sair
    // O laço continua enquanto a variável 'i' for maior que 0.
    for( ; i > 0; ){
        // Solicita ao usuário que insira as 3 notas.
        printf("\nDigite a Nota 1, 2 e 3: ");
        scanf("%f %f %f", &nota1, &nota2, &nota3);  // Lê as 3 notas inseridas pelo usuário.

        printf("-------------------------------------\n");

        // Calcula a média das 3 notas.
        media = (nota1 + nota2 + nota3) / 3;
        // Exibe a média calculada com 2 casas decimais.
        printf("\nMédia = %.2f\n\n", media);

        // Condicional que verifica a situação do aluno com base na média:
        if (media >= 7)  // Se a média for maior ou igual a 7, o aluno é aprovado.
            printf("Aprovado.");
        else if (media >= 4)  // Se a média for maior ou igual a 4, mas menor que 7, o aluno está em recuperação.
            printf("Recuperação.");
        else  // Se a média for menor que 4, o aluno é reprovado.
            printf("Reprovado.");

        printf("\n");

        // Pergunta ao usuário se deseja continuar calculando médias ou sair.
        printf("\nDigite 1 para continuar ou -1 para sair: ");
        scanf("%d", &i);  // Lê a entrada do usuário. Se o valor for 1, o laço continua; se for -1, o laço termina.
    }
    
    return 0;  // Retorna 0, indicando que o programa foi executado com sucesso.
}

