#include <stdio.h>
#include <stdio.h>
void exibirImparesExcetoMultiplosDe7(int limite) {
    int i;
    for (i = 1; i <= limite; i++) {
       
        if (i % 2 != 0 && i % 7 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int numero;

   
    printf("Digite um numero: ");
    scanf("%d", &numero);

   
    exibirImparesExcetoMultiplosDe7(numero);

    return 0;
}

