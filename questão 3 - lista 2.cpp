// Victoria Luize Ortiz

#include <stdio.h>

int fibonacci(int n);

int main(){
	int n, resultado;
	
	printf("Digite um valor: ");
	scanf("%d", &n);
	
	resultado = fibonacci(n);
	
	printf("O %d-esimo numero de Fibonacci e: %d\n", n, resultado );
	
	return 0;

}

int fibonacci(int n) {
	if (n == 0) {
		return 0;
	}else if (n == 1){
		return 1;
	} else{	
	return fibonacci(n -1) + fibonacci(n - 2);
}
	}

