#include <stdio.h>

int main() {
    int numeros[5]; 
    int par[5], impar[5]; 
    int qtd_par = 0, qtd_impar = 0; 
    int i;

    
    printf("Digite 5 números inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]); 

        
        if (numeros[i] % 2 == 0) {
            par[qtd_par++] = numeros[i]; 
        } else {
            impar[qtd_impar++] = numeros[i]; 
        }
    }

    
    printf("\nNúmeros inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", numeros[i]); 
    }
    printf("\n");

    printf("\nNúmeros pares:\n");
    for (i = 0; i < qtd_par; i++) {
        printf("%d ", par[i]); 
    }
    printf("\n");

    printf("\nNúmeros ímpares:\n");
    for (i = 0; i < qtd_impar; i++) {
        printf("%d ", impar[i]);
    }
    printf("\n");

    return 0;
}
