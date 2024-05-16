#include <stdio.h>
#include <stdbool.h>

int main()
{
    int numero = 1; //while
    int dig_num; // Digitar o numero
    bool Valido = false; // VAlido ou invalido para repetir o programa sem encerrar-la 
   
    //Valido ou não
    while (!Valido) {
        
        printf("Digite um número entre 1 e 10: ");
        scanf("%d", &dig_num);
        
        if (dig_num >= 1 && dig_num <= 10) {
            Valido = true;
        } else {
            printf("Número inválido. O numero tem que ser entre 1 a 10\n\n");
            printf("Por favor, tente novamente.\n\n");
        }
    }
    
    //Tabuada de Multiplicação
    while( numero <= 10){
            printf("\n%d X %d = %d", dig_num, numero, dig_num*numero);
            numero++;
    }
    

    return 0;
}
