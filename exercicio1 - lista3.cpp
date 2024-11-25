#include <stdio.h> /* Inclui a biblioteca padrão de entrada e 
saída para uso do printf*/

typedef struct {
    double peso;   // Declara o atributo 'peso' do tipo double
    int idade;     // Declara o atributo 'idade' do tipo int
    double altura; // Declara o atributo 'altura' do tipo double
} pessoa;          /* Define um novo tipo chamado 
'pessoa' usando typedef, que representa essa estrutura*/

// Função para imprimir os dados de uma pessoa
void imprimePessoa(pessoa p) {
    printf("Peso: %lf. Idade: %d. Altura: %lf.\n\n", p.peso, p.idade, p.altura); 
    /* Imprime os valores de 'peso', 'idade' e 'altura'
	da pessoa recebida como parâmetro*/
}

int main() {
    pessoa pessoas[5], p1; /* Declara um array 'pessoas' 
	com 5 elementos do tipo 'pessoa' e uma variável 'p1' do tipo 'pessoa'*/

    // Atribui valores ao primeiro elemento do array 'pessoas'
    pessoas[0].peso = 80.6;   // Atribui 80.6 ao peso de 'pessoas[0]'
    pessoas[0].idade = 40;    // Atribui 40 à idade de 'pessoas[0]'
    pessoas[0].altura = 1.70; // Atribui 1.70 à altura de 'pessoas[0]'

    p1 = pessoas[0]; // Copia os valores de 'pessoas[0]' para 'p1'

    // Condição para verificar se a idade de 'p1' é maior que 20
    if (p1.idade > 20)
        p1.idade++; // Se a idade for maior que 20, incrementa a idade de 'p1' em 1

    pessoas[1] = pessoas[0]; // Copia os valores de 'pessoas[0]' para 'pessoas[1]'

    imprimePessoa(p1);           /* Chama a função imprimePessoa 
	para imprimir os dados de 'p1'*/
    imprimePessoa(pessoas[0]);    /* Imprime os dados do primeiro elemento 
	de 'pessoas'*/
    imprimePessoa(pessoas[1]);    /* Imprime os dados do 
	segundo elemento de 'pessoas'*/
    imprimePessoa(pessoas[2]);    /* Imprime os dados 
	do terceiro elemento de 'pessoas' (não inicializado, valores indefinidos)*/
    imprimePessoa(pessoas[3]);    /* Imprime os dados do 
	quarto elemento de 'pessoas' (não inicializado, valores indefinidos)*/
    imprimePessoa(pessoas[4]);    /* Imprime os dados do 
	quinto elemento de 'pessoas' (não inicializado, valores indefinidos)*/

    return 0; // Retorna 0, indicando que o programa terminou
}

