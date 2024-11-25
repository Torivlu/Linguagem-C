#include <stdio.h>   // Inclui a biblioteca padr�o para entrada e sa�da 
#include <string.h>  // Inclui a biblioteca para manipula��o de strings (strcpy)
#include <locale.h>  /* Inclui a biblioteca para configura��o de localiza��o
 (setlocale)*/

// Define a estrutura 'Carro' com os atributos 'modelo', 'ano' e 'preco'
typedef struct {
    char modelo[50]; /* Declara o atributo 'modelo' com tamanho 50*/
    int ano;         // Declara o atributo 'ano' do tipo int
    double preco;    // Declara o atributo 'preco' do tipo double
} Carro;             /* Define um novo tipo chamado 'Carro' 
usando typedef*/

// Fun��o para modificar o pre�o de um carro
void modificarPreco(Carro *c, double novoPreco) {
    c->preco = novoPreco; /* Acessa o atributo 'preco' do carro
	 apontado por 'c' e define seu valor para 'novoPreco'*/
}

// Fun��o para imprimir os dados de um carro
void imprimirCarro(Carro *c) {
    printf("Modelo: %s\n", c->modelo); /* Imprime o valor do atributo 'modelo' 
	do carro*/
    printf("Ano: %d\n", c->ano); // Imprime o valor do atributo 'ano' do carro
    printf("Pre�o: R$ %.2lf\n", c->preco);/* Imprime o valor do atributo
	 'preco' do carro com duas casas decimais*/
}

// Fun��o principal
int main() {
    setlocale(LC_ALL, "portuguese"); /* Configura a localiza��o para portugu�s*/
    Carro carro1;// Declara uma vari�vel 'carro1' do tipo 'Carro'

    // Atribui valores aos atributos do 'carro1'
    strcpy(carro1.modelo, "XYZ"); /* Copia a string "XYZ" para o atributo 
	'modelo' do carro*/
    carro1.ano = 2020;// Atribui 2020 ao atributo 'ano' do carro
    carro1.preco = 90000.00;// Atribui 90000.00 ao atributo 'preco' do carro

    printf("Dados antes da modifica��o:\n");
    imprimirCarro(&carro1);/* Chama a fun��o 'imprimirCarro' 
	para imprimir os dados do 'carro1'*/

    modificarPreco(&carro1, 115000.00); /* Chama a fun��o 'modificarPreco' 
	para alterar o pre�o de 'carro1' para 115000.00*/

    printf("\nDados ap�s a modifica��o do pre�o:\n");
    imprimirCarro(&carro1);/* Imprime novamente os dados 
	do 'carro1' para mostrar o novo pre�o*/

    return 0; // Retorna 0, indicando que o programa terminou com sucesso
}

