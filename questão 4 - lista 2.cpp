//Victoria Luize Ortiz
#include <stdio.h>

int somatorio (int n);

int main(){
	int num = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	printf("Soma = %d", somatorio (num));
	
	return 0;
}

int somatorio (int n){
	int soma = 0;
	int i;
	for(i = 1; i<=n; i++){
		soma = soma + (5 * i * i + 2 * i + 8);
	}
	
	return soma;
}
