#include <stdio.h> // Inclui a biblioteca padr�o para entrada e sa�da 

// Define a estrutura 'pessoa' com os atributos 'peso', 'idade' e 'altura'
typedef struct {
    double peso;
    int idade;
    double altura;
} pessoa;

// Fun��o para imprimir os dados de uma pessoa
void imprimePessoa(pessoa p) {
    printf("Peso: %.2lf. Idade: %d. Altura: %.2lf.\n\n", p.peso, p.idade, p.altura);
    /* Imprime os valores de 'peso', 'idade' e 'altura' d
	a pessoa recebida como par�metro*/
}

// Fun��o para permitir que o usu�rio digite os dados de uma pessoa
void leDadosPessoa(pessoa *p) {
    printf("Digite o peso: ");
    scanf("%lf", &p->peso); /* L� o valor de 'peso' e armazena 
	no atributo 'peso' da pessoa*/

    printf("Digite a idade: ");
    scanf("%d", &p->idade); /* L� o valor de 'idade' e 
	armazena no atributo 'idade' da pessoa*/

    printf("Digite a altura: ");
    scanf("%lf", &p->altura); /* L� o valor de 'altura' e 
	armazena no atributo 'altura' da pessoa*/
}

// Fun��o principal
int main() {
    pessoa pessoas[5]; // Declara um array 'pessoas' com 5 elementos do tipo 'pessoa'
    
    /* Loop para ler os dados de cada elemento do array
	 'pessoas' usando a fun��o 'leDadosPessoa'*/
    for (int i = 0; i < 5; i++) {
        printf("Pessoa %d:\n", i + 1);
        leDadosPessoa(&pessoas[i]); /* Passa o endere�o do elemento
		 'pessoas[i]' para preencher seus dados*/
    }

    /* Imprime os dados de todas as pessoas do array
	 'pessoas' usando a fun��o 'imprimePessoa'*/
    printf("\nDados das pessoas cadastradas:\n");
    for (int i = 0; i < 5; i++) {
        imprimePessoa(pessoas[i]); /* Chama a fun��o para imprimir
		 os dados de 'pessoas[i]'*/
    }

    return 0; // Retorna 0, indicando que o programa terminou com sucesso
}

