#include<stdio.h>

int main() {
	float matriz[4][3];
	int i, j, c = 0;
	
	for (i = 0; i < 4; i++)
	for (j = 0; j < 3; j++)
	matriz[i][j] = ++c;
	
	return 0;
}
