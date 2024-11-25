#include <stdio.h>

int main(void){
	
	int a, b, multiplicar;
	
	printf("Digite um numero: ");
	scanf("%d", &a);
	
	printf("Digite outro numero: ");
	scanf("%d", &b);
	
	multiplicar = a * b;
	
	printf("\nAmultiplicacao do numeros e: %d", multiplicar);
	
	return 0;
}
