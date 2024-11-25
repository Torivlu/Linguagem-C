#include <stdio.h>

int main() {
    // Declara um ponteiro para um arquivo
    FILE *arquivo = NULL;

    // Abre o arquivo "teste.txt" no modo de escrita ("w")
    // Se o arquivo n�o existir, ele ser� criado. Se j� existir, seu conte�do ser� apagado.
    arquivo = fopen("teste.txt", "w");

    // Verifica se o arquivo foi aberto corretamente
    if (arquivo == NULL) {
        // Se n�o foi poss�vel abrir o arquivo, imprime uma mensagem de erro e retorna
        printf("Erro ao abrir o arquivo.\n");
        return 1; // Retorna 1 para indicar que houve erro
    }

    // Escreve a string "Inicio do arquivo" no arquivo
    fprintf(arquivo, "Inicio do arquivo\n");

    // Declara uma vari�vel inteira 'n' e a inicializa com 507
    int n = 507;

    // Escreve o valor de 'n' no arquivo, formatado como um n�mero inteiro
    fprintf(arquivo, "Valor de n = %d\n", n);

    // Fecha o arquivo, liberando os recursos
    fclose(arquivo);

    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}

