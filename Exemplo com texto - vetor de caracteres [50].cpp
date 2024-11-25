#include <stdio.h>

int main(){
	char nome[50];
	
	printf("Digite seu nome: ");
	scanf("%50[^\n]%*c", nome);
	
	printf("Nome = %s", nome);
	
	return 0;
}
