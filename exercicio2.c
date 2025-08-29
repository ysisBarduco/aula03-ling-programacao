//Ler 5 números e mostrar apenas os números maiores que 10.

#include <stdio.h>

int main(){
    int numeros[5];
    int i;

 
    //Ler 5 números
    printf("\nDigite 5 numeros:\n");
    for(i = 0; i < 5; i++){
        printf("%d numero: ", i+1);
        scanf("%d", &numeros[i]);
    }

    //Mostrar os números maiores que 10
    printf("\nNumeros maiores que 10: ");
    for (i = 0; i < 5; i++){
        if(numeros[i]>10){
            printf("%d ", numeros[i]);
        }
    }

    return 0;
}