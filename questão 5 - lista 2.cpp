 // Victoria Luize Ortiz.
 
 #include <stdio.h>

int soma(int a, int b);

int main (){
	int num1, num2, resultado;
	
	printf("Digite um numero: ");
	scanf("%d", &num1);
	
	printf("Digite outro numero: ");
	scanf("%d", &num2);
	
resultado = soma(num1, num2);
	
	printf("\nO resultado da soma e: %d\n", resultado);
	
	return 0;
}

int soma(int a, int b){ /* semti um pouco de dificuldade sobre como eu chamaria a função soma,
mas assim que parei e análisei consegui fazer.*/
	return a + b;
}


 	

