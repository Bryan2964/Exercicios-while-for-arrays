#include <stdio.h>

int main() {
    char vetor[10];
    int total_consoantes = 0;
    
    printf("Digite 10 caracteres:\n");

    // Leitura dos caracteres
    for (int i = 0; i < 10; i++) {
        printf("Digite o %do caractere: ", i + 1);
        scanf(" %c", &vetor[i]); // Note o espaço antes do %c para consumir espaços em branco, tabs, etc.
    }

    printf("\nConsoantes lidas:\n");

    // Verificando consoantes e imprimindo
    for (int i = 0; i < 10; i++) {
        if ((vetor[i] >= 'a' && vetor[i] <= 'z') || (vetor[i] >= 'A' && vetor[i] <= 'Z')) {
            if (vetor[i] != 'a' && vetor[i] != 'e' && vetor[i] != 'i' && vetor[i] != 'o' && vetor[i] != 'u' &&
                vetor[i] != 'A' && vetor[i] != 'E' && vetor[i] != 'I' && vetor[i] != 'O' && vetor[i] != 'U') {
                printf("%c ", vetor[i]);
                total_consoantes++;
            }
        }
    }

    printf("\nTotal de consoantes lidas: %d\n", total_consoantes);

    return 0;
}

