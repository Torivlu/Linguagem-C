#include <stdio.h>

int calcularResultado(int soma, int primeiroValor, int ultimoValor) {
    int resultado = soma + (primeiroValor * 5) + (ultimoValor * 2);
    return resultado;
}

int main() {
    int vetor[10];
    int soma = 0;

    for (int i = 0; i < 10; i++) {
        vetor[i] = i + 1;
        soma += vetor[i];
    }

    int primeiroValor = vetor[0];
    int ultimoValor = vetor[9];

    int resultado = calcularResultado(soma, primeiroValor, ultimoValor);

    printf("O resultado da expressao e: %d\n", resultado);

    return 0;
}

