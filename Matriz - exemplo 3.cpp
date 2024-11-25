#include <stdio.h>

int main() {
	int m[3][4] = { {3,4,5,5}, {1,3,6,5,}, {8,1,2,5} };
	
	int i, j;
	for(int i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){
			//imprimindo a matriz
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
	return 0;
}
