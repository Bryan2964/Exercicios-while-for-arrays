#include <stdio.h>

int main()
{
    char meses [12][20] = {
        "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };
    
    int num_mes;
    
    while(1){
        printf("Digite Numero do mês: ");
        scanf("%d", &num_mes);
        
        if(num_mes >= 1 && num_mes <=12){
            break;
        }
        else{
            printf("Número de mês inválido. Por favor, tente novamente.\n");
        }
    }
    
     printf("%d - %s\n", num_mes, meses[num_mes - 1]);

    return 0;
}
