#include <stdio.h>

void maiorNumero(int num1, int num2) {
    if (num1 > num2) {
        printf("O maior numero e: %d\n", num1);
    } else if (num2 > num1) {
        printf("O maior numero e: %d\n", num2);
    } else {
        printf("Os numeros sao iguais: %d\n", num1);
    }
}

int main() {
    int numero1, numero2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    maiorNumero(numero1, numero2);

    return 0;
}

