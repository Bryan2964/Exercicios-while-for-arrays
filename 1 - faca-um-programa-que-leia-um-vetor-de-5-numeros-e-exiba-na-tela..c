#include <stdio.h>

int main()
{
    int num[5];
    int i;
    
    printf("Digite 5 numeros: \n\n");
    
    for(i=0; i<5; i++){
        printf("Digite o numero: \n");
        scanf("%d", &num[i]);
    }
    
    printf("Numeros digitados: \n");
    for(i=0; i<5; i++){
        printf("%d", num[i]);
    }
    

    return 0;
}

