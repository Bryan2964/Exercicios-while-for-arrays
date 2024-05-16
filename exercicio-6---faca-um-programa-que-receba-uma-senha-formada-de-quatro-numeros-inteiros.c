#include <stdio.h>
#include <string.h>

#define TAMANHO_MAXIMO 20

int main()
{
    char criar_senha[TAMANHO_MAXIMO];
    char digitar_senha[TAMANHO_MAXIMO];
    int tentativas = 3;
    
    //criar senha
    
    printf("Crie uma senha de 4 digitos numericos: ");
    scanf("%s", criar_senha);
    
    printf("\nSenha criada com sucesso\n");
    
    //Repetição de senha
    while(tentativas>0){
        printf("\nDigite sua senha: ");
        scanf("%s", digitar_senha);
        
        if(strcmp(digitar_senha, criar_senha) == 0){
            printf("\nSenha correto");
            break;
        } else{
            tentativas --;
            printf("Senha incorreta");
        }
    }

    return 0;
}
