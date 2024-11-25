#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

/* Declaração da função calcularResultado que recebe
 um array de inteiros e seu tamanho*/
int calcularResultado(int v[], int n);

int main() {
	int vetor[5], i, resultado;/* Declara um array de inteiros com 
	5 posições e duas variáveis inteiras*/

	// Preenche o array 'vetor' com múltiplos de 2 (0, 2, 4, 6, 8)
	for (i = 0; i < 5; i++) {
		vetor[i] = i * 2; // Atribui o valor de i*2 à posição i do array
	}
	
	// Chama a função calcularResultado passando o array 'vetor' e seu tamanho (5)
	resultado = calcularResultado(vetor, 5);
	
	// Imprime o resultado retornado pela função
	printf("O resultado e: %d\n", resultado);
	
	return 0; // Encerra o programa com código de sucesso
}

// Função que calcula a soma dos elementos de um array
int calcularResultado(int v[], int n) {
	int i, soma = 0; // Declara variáveis: 'i' para controle do loop e 'soma' para acumular a soma dos elementos
	
	// Loop que percorre o array até o tamanho 'n'
	for(i = 0; i < n; i++) {
		soma += v[i]; // Adiciona o valor de v[i] à variável soma
	}
	
	return soma; // Retorna o valor da soma
}


