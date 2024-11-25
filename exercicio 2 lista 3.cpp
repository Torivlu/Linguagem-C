#include <stdio.h>   // Inclui a biblioteca padrão para entrada e saída 
#include <string.h>  // Inclui a biblioteca para manipulação de strings (strcpy)
#include <locale.h>  /* Inclui a biblioteca para configuração de localização
 (setlocale)*/

// Define a estrutura 'Carro' com os atributos 'modelo', 'ano' e 'preco'
typedef struct {
    char modelo[50]; /* Declara o atributo 'modelo' com tamanho 50*/
    int ano;         // Declara o atributo 'ano' do tipo int
    double preco;    // Declara o atributo 'preco' do tipo double
} Carro;             /* Define um novo tipo chamado 'Carro' 
usando typedef*/

// Função para modificar o preço de um carro
void modificarPreco(Carro *c, double novoPreco) {
    c->preco = novoPreco; /* Acessa o atributo 'preco' do carro
	 apontado por 'c' e define seu valor para 'novoPreco'*/
}

// Função para imprimir os dados de um carro
void imprimirCarro(Carro *c) {
    printf("Modelo: %s\n", c->modelo); /* Imprime o valor do atributo 'modelo' 
	do carro*/
    printf("Ano: %d\n", c->ano); // Imprime o valor do atributo 'ano' do carro
    printf("Preço: R$ %.2lf\n", c->preco);/* Imprime o valor do atributo
	 'preco' do carro com duas casas decimais*/
}

// Função principal
int main() {
    setlocale(LC_ALL, "portuguese"); /* Configura a localização para português*/
    Carro carro1;// Declara uma variável 'carro1' do tipo 'Carro'

    // Atribui valores aos atributos do 'carro1'
    strcpy(carro1.modelo, "XYZ"); /* Copia a string "XYZ" para o atributo 
	'modelo' do carro*/
    carro1.ano = 2020;// Atribui 2020 ao atributo 'ano' do carro
    carro1.preco = 90000.00;// Atribui 90000.00 ao atributo 'preco' do carro

    printf("Dados antes da modificação:\n");
    imprimirCarro(&carro1);/* Chama a função 'imprimirCarro' 
	para imprimir os dados do 'carro1'*/

    modificarPreco(&carro1, 115000.00); /* Chama a função 'modificarPreco' 
	para alterar o preço de 'carro1' para 115000.00*/

    printf("\nDados após a modificação do preço:\n");
    imprimirCarro(&carro1);/* Imprime novamente os dados 
	do 'carro1' para mostrar o novo preço*/

    return 0; // Retorna 0, indicando que o programa terminou com sucesso
}

