#include <stdio.h>

int main(void){
	char nome[30];
	printf("Digite seu nome: ");
	scanf("%30[^\n]%*c", nome); 
	/*Quando trabalhamos com strings n�o precisamos colocar o s�mbolo &, 
	antes da vari�vel.*/
	
	printf("\nNOME: %s", nome);
	return 0;
}
