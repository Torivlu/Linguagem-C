#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
	
    int numeroX = 0, numeroY = 0, soma = 0;
    
    printf("\nDigite o primeiro n�mero: \n");
    scanf("%d", &numeroX);
	
    printf("\nDigite o segundo n�mero: \n");
    scanf("%d", &numeroY);
	
    soma = numeroX + numeroY;
	
    printf("\nSOMA = %d\n", soma);
	
    return 0;
}

