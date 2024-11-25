#include <stdio.h>

int main(){
	
	int n1, n2, soma; // declaração de variáveis
	
	printf("Digite um numero:");// entrada de dados
	scanf("%d", &n1); // entrada de dados
	
	printf("Digite outro numero: "); // entrada de dados
    scanf("%d", &n2); // entrada de dados
    
	soma = n1 + n2; //soma dois valore //processamento
    printf("\nO resultado e: %d\n", soma); //saída de dados
    
    return 0;
}
