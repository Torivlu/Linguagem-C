#include <stdio.h> // Inclui a biblioteca padr�o de entrada e sa�da

/* Declara��o da fun��o calcularResultado que recebe
 um array de inteiros e seu tamanho*/
int calcularResultado(int v[], int n);

int main() {
	int vetor[5], i, resultado;/* Declara um array de inteiros com 
	5 posi��es e duas vari�veis inteiras*/

	// Preenche o array 'vetor' com m�ltiplos de 2 (0, 2, 4, 6, 8)
	for (i = 0; i < 5; i++) {
		vetor[i] = i * 2; // Atribui o valor de i*2 � posi��o i do array
	}
	
	// Chama a fun��o calcularResultado passando o array 'vetor' e seu tamanho (5)
	resultado = calcularResultado(vetor, 5);
	
	// Imprime o resultado retornado pela fun��o
	printf("O resultado e: %d\n", resultado);
	
	return 0; // Encerra o programa com c�digo de sucesso
}

// Fun��o que calcula a soma dos elementos de um array
int calcularResultado(int v[], int n) {
	int i, soma = 0; // Declara vari�veis: 'i' para controle do loop e 'soma' para acumular a soma dos elementos
	
	// Loop que percorre o array at� o tamanho 'n'
	for(i = 0; i < n; i++) {
		soma += v[i]; // Adiciona o valor de v[i] � vari�vel soma
	}
	
	return soma; // Retorna o valor da soma
}


