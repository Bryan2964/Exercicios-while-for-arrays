#include <stdio.h>

int main() {
    int vetor1[5], vetor2[5], vetor3[10];
    int i, j;

    printf("Digite os elementos do primeiro vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    printf("\nDigite os elementos do segundo vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    j = 0;
    for (i = 0; i < 5; i++) {
        vetor3[j] = vetor1[i];
        vetor3[j + 1] = vetor2[i]; 
        j += 2; 
    }

    printf("\nO terceiro vetor intercalado:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor3[i]);
    }
    printf("\n");

    return 0;
}
