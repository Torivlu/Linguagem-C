#include <stdio.h>

int main() {
    float matriz[4][3];
    int i, j, c = 0;// o c será usado para preencher a matriz sequencialmente

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            matriz[i][j] = c++;
        }
    }

    // Imprimindo a matriz
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// preenche a matriz somando 
