#include <stdio.h>

int main()
{
    int numero, fatorial = 1;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    if(numero < 0 ){
        printf("Erro: Fatorial de números negativos não está definido.\n");
    } else {
        
        int contador=numero;
        while(contador > 0){
            fatorial *=contador;
            
            contador--;
        }
    }
    
    printf("O fatorial de %d é: %d", numero, fatorial);
            

    return 0;
}
