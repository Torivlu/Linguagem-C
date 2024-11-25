#include <stdio.h>

// Fun��o que calcula a m�dia aritm�tica de quatro notas
float calcularMedia(float nota1, float nota2, float nota3, float nota4) {
    return (nota1 + nota2 + nota3 + nota4) / 4;
}

int main() {
    float nota1, nota2, nota3, nota4, media;

    // Entrada das notas do aluno
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    // Chama a fun��o para calcular a m�dia das quatro notas
    media = calcularMedia(nota1, nota2, nota3, nota4);

    // Exibe a m�dia calculada
    printf("Media: %.2f\n", media);

    // Verifica se o aluno foi aprovado ou reprovado
    if (media >= 7) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}

