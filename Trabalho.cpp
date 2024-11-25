#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

#define MAX_PEDIDOS 1000
#define MAX_CLIENTES 1000

typedef struct {
    int idPedido;
    char descricao[100];  // Descrição do pedido
    int ValorTotal;
    int Quantidade;
    int idCliente; // Associar o pedido a um cliente
} Pedido;

typedef struct {
    int id;
    char nome[100];
    char DataNasc[11];
    char Telefone[12];
    char Endereco[100];
    char CPF[12];
} Cliente;

typedef struct {
    char titular[100];
    char numeroCartao[17];  // Cartão com 16 dígitos
    char cvv[4];            // CVV com 3 dígitos
    char vencimento[6];     // Formato MM/AAAA
} Cartao;

Pedido pedidos[MAX_PEDIDOS];
Cliente clientes[MAX_CLIENTES];
Cartao cartao;  // Variável global para armazenar os dados do cartão
int contadorPedidos = 0;
int contadorClientes = 0;

void gerarCartaoAleatorio() {
    // Função que gera um cartão de crédito aleatório
    sprintf(cartao.titular, "Titular %d", rand() % 10000);
    sprintf(cartao.numeroCartao, "%016d", rand() % 10000000000000000L); // Gera 16 dígitos aleatórios
    sprintf(cartao.cvv, "%03d", rand() % 900 + 100); // Gera um CVV aleatório entre 100 e 999
    sprintf(cartao.vencimento, "%02d/%04d", rand() % 12 + 1, rand() % 30 + 2024); // Gera um vencimento entre 01/2024 e 12/2053
}

void pagamento() {
    char senha[5];
    printf("Digite a senha para visualizar os dados do pagamento: ");
    scanf("%s", senha);

    if (strcmp(senha, "1234") == 0) {
        gerarCartaoAleatorio();
        printf("\nDados do Cartão de Crédito:\n");
        printf("Titular: %s\n", cartao.titular);
        printf("Número do Cartão: %s\n", cartao.numeroCartao);
        printf("CVV: %s\n", cartao.cvv);
        printf("Vencimento: %s\n", cartao.vencimento);
    } else {
        printf("Senha incorreta. Acesso negado.\n");
    }
    system("pause");
    system("cls");
}

void acrescentarPedido() {
    if (contadorPedidos < MAX_PEDIDOS) {
        Pedido novo;
        novo.idPedido = contadorPedidos + 1; // Atribui um ID sequencial

        printf("Digite o ID do Cliente para o pedido: ");
        scanf("%d", &novo.idCliente);
        
        getchar();  // Limpar o buffer
        printf("Digite a descrição do pedido: ");
        fgets(novo.descricao, sizeof(novo.descricao), stdin);
        novo.descricao[strcspn(novo.descricao, "\n")] = 0;  // Remover a nova linha

        printf("Digite o valor total do pedido: ");
        scanf("%d", &novo.ValorTotal);

        printf("Digite a quantidade do pedido: ");
        scanf("%d", &novo.Quantidade);
        
        pedidos[contadorPedidos++] = novo;
        printf("Pedido criado: ID: %d - Descrição: %s - Valor Total: %d - Quantidade: %d - Cliente ID: %d\n",
               novo.idPedido, novo.descricao, novo.ValorTotal, novo.Quantidade, novo.idCliente);
    } else {
        printf("Limite de pedidos atingido.\n");
    }
    system("pause");
    system("cls");
}

void listarPedido() {
    if (contadorPedidos == 0) {
        printf("Nenhum pedido cadastrado.\n");
        system("pause");
        system("cls");
        return;
    }

    printf("Lista de pedidos:\n");
    for (int i = 0; i < contadorPedidos; i++) {
        printf("ID: %d - Descrição: %s - Valor Total: %d - Quantidade: %d - Cliente ID: %d\n",
               pedidos[i].idPedido, pedidos[i].descricao, pedidos[i].ValorTotal, pedidos[i].Quantidade, pedidos[i].idCliente);
    }
    system("pause");
    system("cls");
}

void atualizarPedido() {
    int id;
    printf("Digite o ID do pedido que deseja atualizar: ");
    scanf("%d", &id);

    for (int i = 0; i < contadorPedidos; i++) {
        if (pedidos[i].idPedido == id) {
            getchar();  // Limpar o buffer
            printf("Digite a nova descrição do pedido: ");
            fgets(pedidos[i].descricao, sizeof(pedidos[i].descricao), stdin);
            pedidos[i].descricao[strcspn(pedidos[i].descricao, "\n")] = 0;  // Remover a nova linha

            printf("Digite o novo valor total do pedido: ");
            scanf("%d", &pedidos[i].ValorTotal);

            printf("Digite a nova quantidade do pedido: ");
            scanf("%d", &pedidos[i].Quantidade);

            printf("Pedido atualizado: ID: %d - Descrição: %s - Novo Valor Total: %d - Nova Quantidade: %d - Cliente ID: %d\n",
                   pedidos[i].idPedido, pedidos[i].descricao, pedidos[i].ValorTotal, pedidos[i].Quantidade, pedidos[i].idCliente);
            return;
        }
    }
    printf("Pedido com ID %d não encontrado.\n", id);
    system("pause");
    system("cls");
}

void deletarPedido() {
    int id;
    printf("Digite o ID do pedido que deseja deletar: ");
    scanf("%d", &id);

    for (int i = 0; i < contadorPedidos; i++) {
        if (pedidos[i].idPedido == id) {
            for (int j = i; j < contadorPedidos - 1; j++) {
                pedidos[j] = pedidos[j + 1];  // Move os pedidos subsequentes uma posição para a esquerda
            }
            contadorPedidos--;
            printf("Pedido com ID %d deletado.\n", id);
            return;
        }
    }
    printf("Pedido com ID %d não encontrado.\n", id);
    system("pause");
    system("cls");
}

void criarCliente() {
    if (contadorClientes < MAX_CLIENTES) {
        Cliente novo;
        printf("Digite o ID do Cliente: ");
        scanf("%d", &novo.id);
        printf("Digite o nome do Cliente: ");
        getchar(); // Limpa o buffer
        fgets(novo.nome, sizeof(novo.nome), stdin);
        novo.nome[strcspn(novo.nome, "\n")] = 0; // Remove a nova linha
        clientes[contadorClientes++] = novo;
        printf("Cliente criado: ID: %d - Nome: %s\n", novo.id, novo.nome);
    } else {
        printf("Limite de clientes atingido.\n");
    }
    system("pause");
    system("cls");
}

void listarCliente() {
    printf("Lista de Clientes:\n");
    for (int i = 0; i < contadorClientes; i++) {
        printf("ID: %d - Nome: %s\n", clientes[i].id, clientes[i].nome);
    }
    system("pause");
    system("cls");
}

void atualizarCliente() {
    int id;
    printf("Digite o ID do Cliente que deseja atualizar: ");
    scanf("%d", &id);

    for (int i = 0; i < contadorClientes; i++) {
        if (clientes[i].id == id) {
            printf("Digite o novo nome do Cliente: ");
            getchar(); // Limpa o buffer
            fgets(clientes[i].nome, sizeof(clientes[i].nome), stdin);
            clientes[i].nome[strcspn(clientes[i].nome, "\n")] = 0; // Remove a nova linha
            printf("Cliente atualizado: ID: %d - Nome: %s\n", id, clientes[i].nome);
            return;
        }
    }
    printf("Cliente com ID %d não encontrado.\n", id);
    system("pause");
    system("cls");
}

void deletarCliente() {
    int id;
    printf("Digite o ID do Cliente que deseja deletar: ");
    scanf("%d", &id);

    for (int i = 0; i < contadorClientes; i++) {
        if (clientes[i].id == id) {
            for (int j = i; j < contadorClientes - 1; j++) {
                clientes[j] = clientes[j + 1];
            }
            contadorClientes--;
            printf("Cliente com ID %d deletado.\n", id);
            return;
        }
    }
    printf("Cliente com ID %d não encontrado.\n", id);
    system("pause");
    system("cls");
}

int main() {
    setlocale(LC_ALL, "");
    srand(time(NULL)); // Inicializa a semente para geração aleatória
    int opcao, subOpcao;

    do {
        printf("\nMenu Principal:\n");
        printf("1. Gerenciar Pedidos\n");
        printf("2. Gerenciar Clientes\n");
        printf("3. Efetuar Pagamento\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: // Gerenciar Pedidos
                do {
                    printf("\nMenu de Pedidos:\n");
                    printf("1. Acrescentar pedido\n");
                    printf("2. Listar pedidos\n");
                    printf("3. Atualizar pedido\n");
                    printf("4. Deletar pedido\n");
                    printf("5. Voltar ao Menu Principal\n");
                    printf("Escolha uma opção: ");
                    scanf("%d", &subOpcao);

                    switch (subOpcao) {
                        case 1:
                            acrescentarPedido();
                            break;
                        case 2:
                            listarPedido();
                            break;
                        case 3:
                            atualizarPedido();
                            break;
                        case 4:
                            deletarPedido();
                            break;
                        case 5:
                            break; // Volta ao Menu Principal
                        default:
                            printf("Opção inválida. Tente novamente.\n");
                    }
                } while (subOpcao != 5);
                break;

            case 2: // Gerenciar Clientes
                do {
                    printf("\nMenu de Clientes:\n");
                    printf("1. Criar Cliente\n");
                    printf("2. Listar Clientes\n");
                    printf("3. Atualizar Cliente\n");
                    printf("4. Deletar Cliente\n");
                    printf("5. Voltar ao Menu Principal\n");
                    printf("Escolha uma opção: ");
                    scanf("%d", &subOpcao);

                    switch (subOpcao) {
                        case 1:
                            criarCliente();
                            break;
                        case 2:
                            listarCliente();
                            break;
                        case 3:
                            atualizarCliente();
                            break;
                        case 4:
                            deletarCliente();
                            break;
                        case 5:
                            break; // Volta ao Menu Principal
                        default:
                            printf("Opção inválida. Tente novamente.\n");
                    }
                } while (subOpcao != 5);
                break;

            case 3: // Efetuar Pagamento
                pagamento();
                break;

            case 4:
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);  // Condição de saída

    return 0;
}
