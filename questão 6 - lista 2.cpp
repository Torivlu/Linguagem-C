//Victoria Luize Ortiz

#include <stdio.h>

int maiorNumero(int a, int b);

int main(){
	int num1, num2, maior;
	
	printf("Digite um numero: ");
	scanf("%d", &num1);
	
	printf("Digite outro numero: ");
	scanf("%d", &num2);
	
	maior = maiorNumero(num1, num2);
	
	printf("O maior numero e: %d\n", maior);
	
	return 0;
}

int maiorNumero(int a, int b){
	if (a > b){
		return a;
	} else {
		return b;
	}
}
