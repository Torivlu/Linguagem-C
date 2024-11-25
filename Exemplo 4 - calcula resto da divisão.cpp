#include <stdio.h>

int main(void){
	
	int num, resto;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	resto = num % 2;
	
	printf("O resto (mod) da divisao por 2 = %d\n ", resto);
	
	return 0;
}
