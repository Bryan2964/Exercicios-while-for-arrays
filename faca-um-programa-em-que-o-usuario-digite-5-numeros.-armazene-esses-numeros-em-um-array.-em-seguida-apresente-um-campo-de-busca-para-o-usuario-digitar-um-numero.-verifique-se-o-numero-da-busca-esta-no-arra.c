#include <stdio.h>

int main()
{
    int num[5];
    int i, buscar, encontrado = 0;
    
    printf("Digite 5 numeros: \n\n");
    
    for(i = 0; i < 5; i++){
        printf("Digite o numero: ");
        scanf("%d", &num[i]);
    }

    printf("\nDigite o numero que deseja buscar: ");
    scanf("%d", &buscar);

    // Verifica se o número da busca está no array
    for(i = 0; i < 5; i++) {
        if(num[i] == buscar) {
            encontrado = 1;
            break;
        }
    }

    if(encontrado) {
        printf("\nO numero %d foi encontrado no array.\n", buscar);
    } else {
        printf("\nO numero %d nao foi encontrado no array.\n", buscar);
    }

    return 0;
}
