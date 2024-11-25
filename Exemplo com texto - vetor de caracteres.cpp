#include <stdio.h>

int main(void){
	char nome[30];
	printf("Digite seu nome: ");
	scanf("%30[^\n]%*c", nome); 
	/*Quando trabalhamos com strings não precisamos colocar o símbolo &, 
	antes da variável.*/
	
	printf("\nNOME: %s", nome);
	return 0;
}
