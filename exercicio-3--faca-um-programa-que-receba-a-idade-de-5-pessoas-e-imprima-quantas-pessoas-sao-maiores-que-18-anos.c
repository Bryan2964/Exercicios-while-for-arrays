#include <stdio.h>

int main() {
    int idades[5]; 
    int contador = 0;
    int pessoa = 0; 

   
    while (pessoa < 5) {
        printf("Idade da pessoa %d: ", pessoa + 1);
        scanf("%d", &idades[pessoa]);
        pessoa++;
    }

    pessoa = 0; 

    while (pessoa < 5) {
        if (idades[pessoa] > 18) {
            contador++;
        }
        pessoa++;
    }

    printf("Quantidade de pessoas com mais de 18 anos: %d\n", contador);

    return 0;
}

