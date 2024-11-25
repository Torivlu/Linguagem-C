#include <stdio.h>

int menorNumero(int num1, int num2, int num3) {
    int menor = num1;

    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }

    return menor;
}

int main() {
    int numero1, numero2, numero3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &numero3);

    int menor = menorNumero(numero1, numero2, numero3);

    printf("O menor numero e: %d\n", menor);

    return 0;
}

