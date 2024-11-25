#include <stdio.h>

int main() {
    // Declara um ponteiro para um arquivo
    FILE *arquivo = NULL;

    // Abre o arquivo "teste.txt" no modo de escrita ("w")
    // Se o arquivo não existir, ele será criado. Se já existir, seu conteúdo será apagado.
    arquivo = fopen("teste.txt", "w");

    // Verifica se o arquivo foi aberto corretamente
    if (arquivo == NULL) {
        // Se não foi possível abrir o arquivo, imprime uma mensagem de erro e retorna
        printf("Erro ao abrir o arquivo.\n");
        return 1; // Retorna 1 para indicar que houve erro
    }

    // Escreve a string "Inicio do arquivo" no arquivo
    fprintf(arquivo, "Inicio do arquivo\n");

    // Declara uma variável inteira 'n' e a inicializa com 507
    int n = 507;

    // Escreve o valor de 'n' no arquivo, formatado como um número inteiro
    fprintf(arquivo, "Valor de n = %d\n", n);

    // Fecha o arquivo, liberando os recursos
    fclose(arquivo);

    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}

