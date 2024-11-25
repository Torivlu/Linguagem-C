#include <stdio.h>  // Biblioteca para fun��es de entrada e sa�da (printf, scanf)

int main(){
    int senhaCadastro, senhaAcesso;  // Declara��o de duas vari�veis inteiras: 'senhaCadastro' para armazenar a senha cadastrada
                                     // e 'senhaAcesso' para armazenar a senha fornecida pelo usu�rio no momento do acesso.

    // Exibe uma linha de separa��o e uma mensagem solicitando que o usu�rio cadastre sua senha.
    printf("\n-------------------------------------\n");
    printf("Cadastro de Senha do Sistema. ");
    printf("\nCadastre sua senha: ");
    
    // L� o valor da senha cadastrada inserida pelo usu�rio e armazena em 'senhaCadastro'.
    scanf("%d", &senhaCadastro);  

    // Exibe uma linha de separa��o e uma mensagem solicitando que o usu�rio digite a senha para acesso ao sistema.
    printf("\n-------------------------------------\n");
    printf("Acesso ao Sistema. Digite sua senha: ");
    
    // L� o valor da senha inserida pelo usu�rio no momento do acesso e armazena em 'senhaAcesso'.
    scanf("%d", &senhaAcesso);  

    // Verifica se a senha de acesso fornecida corresponde � senha cadastrada.
    if(senhaCadastro == senhaAcesso)
        // Se as senhas coincidirem, imprime que a senha est� correta e o acesso � permitido.
        printf("Senha Correta! Acesso Permitido!");
    else
        // Caso contr�rio, imprime que a senha est� errada e o acesso � negado.
        printf("Senha Errada! Acesso Negado!");

    return 0;  // Retorna 0, indicando que o programa foi executado com sucesso.
}

