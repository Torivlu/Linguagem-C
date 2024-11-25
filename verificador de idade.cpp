#include <stdio.h>  // Biblioteca para fun��es de entrada e sa�da (printf, scanf)

int main(){
    int idade, senhaAcesso, i = 1;  // Declara��o das vari�veis: 'idade' para armazenar a idade fornecida pelo usu�rio,
                                    // 'senhaAcesso' e 'i' s�o declaradas, mas n�o s�o usadas neste c�digo.

    // Exibe uma linha de separa��o e uma mensagem de introdu��o do programa.
    printf("-------------------------------------\n");
    printf("Classificador de Idades.");
    
    // Solicita ao usu�rio para digitar sua idade.
    printf("\nDigite sua Idade: ");
    scanf("%d", &idade);  // L� o valor da idade fornecida pelo usu�rio e armazena na vari�vel 'idade'.

    // Exibe uma linha de separa��o ap�s a entrada da idade.
    printf("\n-------------------------------------\n");
    
    // Estrutura condicional para classificar a idade em diferentes faixas et�rias:
    
    if (idade >= 65)  // Se a idade for maior ou igual a 65, classifica como "Idoso".
        printf("Idoso.");
    else if (idade >= 18)  // Se a idade for maior ou igual a 18 e menor que 65, classifica como "Adulto".
        printf("Adulto.");
    else if (idade >= 13)  // Se a idade for maior ou igual a 13 e menor que 18, classifica como "Adolescente".
        printf("Adolescente.");
    else  // Se a idade for menor que 13, classifica como "Crian�a".
        printf("Crian�a.");
    
    return 0;  // Retorna 0, indicando que o programa foi executado com sucesso.
}

