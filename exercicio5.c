//5. Matriz 2×3 - contar quantos elementos são maiores que 5
#include <stdio.h>

int main(){
    int matriz[2][3]; //Criar matriz 2x3
    int i, j, contador;

    //Preencher matriz 2x3
    printf("\nDigite os elementos da matriz 2x3: \n");
    for (i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    //Contar os elementos maiores que 5
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            if(matriz[i][j] > 5){
                contador++;
            }
        }
    }

    //Mosta o resultado da contagem
    printf("\nElementos maiores que cinco apareceram %d vezes.\n", contador);
    
    return 0;
}