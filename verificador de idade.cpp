#include <stdio.h>  // Biblioteca para funções de entrada e saída (printf, scanf)

int main(){
    int idade, senhaAcesso, i = 1;  // Declaração das variáveis: 'idade' para armazenar a idade fornecida pelo usuário,
                                    // 'senhaAcesso' e 'i' são declaradas, mas não são usadas neste código.

    // Exibe uma linha de separação e uma mensagem de introdução do programa.
    printf("-------------------------------------\n");
    printf("Classificador de Idades.");
    
    // Solicita ao usuário para digitar sua idade.
    printf("\nDigite sua Idade: ");
    scanf("%d", &idade);  // Lê o valor da idade fornecida pelo usuário e armazena na variável 'idade'.

    // Exibe uma linha de separação após a entrada da idade.
    printf("\n-------------------------------------\n");
    
    // Estrutura condicional para classificar a idade em diferentes faixas etárias:
    
    if (idade >= 65)  // Se a idade for maior ou igual a 65, classifica como "Idoso".
        printf("Idoso.");
    else if (idade >= 18)  // Se a idade for maior ou igual a 18 e menor que 65, classifica como "Adulto".
        printf("Adulto.");
    else if (idade >= 13)  // Se a idade for maior ou igual a 13 e menor que 18, classifica como "Adolescente".
        printf("Adolescente.");
    else  // Se a idade for menor que 13, classifica como "Criança".
        printf("Criança.");
    
    return 0;  // Retorna 0, indicando que o programa foi executado com sucesso.
}

