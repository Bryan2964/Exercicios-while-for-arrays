#include <stdio.h>

int main()
{
    int alunos;
    float peso;
    int resultado=0;
    int media=0;
    
    printf("Quantos alunos tem: ");
    scanf("%d", &alunos);
    
    printf("\npeso do aluno por vez:\n\n ");
    
    while(media<alunos){
        printf("peso do aluno %d: ", media + 1);
        scanf("%f", &peso);
        resultado = peso;
        media++;
    }
    
    float final = resultado/alunos;
    
    printf("A media de peso dos alunos é: %.2f", final);

    return 0;
}
