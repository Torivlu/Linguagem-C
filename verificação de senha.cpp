#include <stdio.h>  // Biblioteca para funções de entrada e saída (printf, scanf)

int main(){
    int senhaCadastro, senhaAcesso;  // Declaração de duas variáveis inteiras: 'senhaCadastro' para armazenar a senha cadastrada
                                     // e 'senhaAcesso' para armazenar a senha fornecida pelo usuário no momento do acesso.

    // Exibe uma linha de separação e uma mensagem solicitando que o usuário cadastre sua senha.
    printf("\n-------------------------------------\n");
    printf("Cadastro de Senha do Sistema. ");
    printf("\nCadastre sua senha: ");
    
    // Lê o valor da senha cadastrada inserida pelo usuário e armazena em 'senhaCadastro'.
    scanf("%d", &senhaCadastro);  

    // Exibe uma linha de separação e uma mensagem solicitando que o usuário digite a senha para acesso ao sistema.
    printf("\n-------------------------------------\n");
    printf("Acesso ao Sistema. Digite sua senha: ");
    
    // Lê o valor da senha inserida pelo usuário no momento do acesso e armazena em 'senhaAcesso'.
    scanf("%d", &senhaAcesso);  

    // Verifica se a senha de acesso fornecida corresponde à senha cadastrada.
    if(senhaCadastro == senhaAcesso)
        // Se as senhas coincidirem, imprime que a senha está correta e o acesso é permitido.
        printf("Senha Correta! Acesso Permitido!");
    else
        // Caso contrário, imprime que a senha está errada e o acesso é negado.
        printf("Senha Errada! Acesso Negado!");

    return 0;  // Retorna 0, indicando que o programa foi executado com sucesso.
}

