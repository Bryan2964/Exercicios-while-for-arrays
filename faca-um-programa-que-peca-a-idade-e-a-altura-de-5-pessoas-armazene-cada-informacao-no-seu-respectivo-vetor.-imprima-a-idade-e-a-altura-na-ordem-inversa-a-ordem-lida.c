#include <stdio.h>

int main() {
    int idade[5];
    float altura[5];
    int i;

    // Solicita a idade e a altura de 5 pessoas e armazena nos vetores
    for (i = 0; i < 5; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade[i]);

        printf("Digite a altura (em metros) da pessoa %d: ", i + 1);
        scanf("%f", &altura[i]);
    }

    // Imprime a idade e a altura na ordem inversa
    printf("\nIdade e altura na ordem inversa:\n");
    for (i = 4; i >= 0; i--) {
        printf("Pessoa %d - Idade: %d anos, Altura: %.2f metros\n", i + 1, idade[i], altura[i]);
    }

    return 0;
}

