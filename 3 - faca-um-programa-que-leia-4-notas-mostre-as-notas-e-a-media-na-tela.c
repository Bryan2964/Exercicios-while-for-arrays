#include <stdio.h>

int main()
{
    float notas[4];
    float media;
    float soma;
    int i;
    
    printf("Digites suas 4 notas:\n\n");
    
    for(i=0; i<4; i++){
        printf("Digite sua nota: \n");
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    
    media=soma/4;
    
    printf("Suas notas: \n");
    for(i=0; i<4; i++){
        printf("Nota %d: %.2f\n", i + 1, notas[i]);
    }
    
    printf("\nMedia: %.2f", media);

    return 0;
}

