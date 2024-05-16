#include <stdio.h>

int main()
{
    
    //Variaveis
    char opções[4][20] = {"Consulta", "Saque", "Deposito", "Sair"}; // minhas opções
    int escolha; // switch
    
    //calcular 
    float saldo;
    float saque;
    float deposito;
    
    

    while(1){
        
    printf("1. Consulta\n");
    printf("2. Saque\n");
    printf("3. Deposito\n");
    printf("4. Sair\n");
    
    
    printf("\nEscolha uma opçao: ");
    scanf("%d", &escolha);
    
    if(escolha <1 || escolha >4){
        printf("\nNão temos essa opçao. Escolha novamente\n\n");
        continue;
    }
    
     switch (escolha) {
         
        case 1:
        printf("\nConsulta\n");
        printf("Seu saldo é: %.2f\n\n", saldo);
        break;
        
        case 2:
        printf("\nSaque");
        printf("\n\nDigite o valor do saque: ");
        scanf("%f", &saque);
            if(saque > saldo){
                printf("Saldo insuficiente\n");
            }else{
                saldo -=saque;
                printf("Saque de %.2f realizado com sucesso\n", saque);
            }
            saque = saque - saldo;
        break;
        
        case 3:
        printf("\nDeposito");
        printf("\n\nDigite o valor de deposito: ");
        scanf("%f", &deposito);
        saldo = deposito;
        break;
        
        case 4:
        printf("\nSair");
        return 0;
        break;
        
        default:
        printf("\nInvalido");
    }
    
    //printf("\n%d - %s\n", escolha, opções[escolha - 1]);
    
    continue;
        
    }
    
   
    
    
   

    return 0;
}
