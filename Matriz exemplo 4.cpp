#include <stdio.h>

int main() {
	int lin = 5, col = 2;
	int matriz[lin][col];
	int i, j;
	
	for (i = 0; i < lin; i++)
	for (j = 0; j < col; j++)
	matriz[i][j];
	//quando temos apenas um comando aberto do for não precisa colocar { }
	
	for(i = 0; i < lin; i++){
		for(j = 0; j < col; j++){
			//imprimindo a matriz
			printf("%d", matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
