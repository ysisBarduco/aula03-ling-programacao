//4. Matriz 3×3 - calcular soma da diagonal principal
#include <stdio.h>

int main(){
    int matriz[3][3];//Criar matriz 3x3
    int i, j, soma;

    //Preencher matriz 3x3
    printf("\nDigite os elementos da matriz 3x3: \n");
    for (i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    //Somar os elementos da diagonal principal
    soma = matriz[0][0] + matriz[1][1] + matriz[2][2];

    //Mostrar resultado da soma
    printf("Soma dos elementos da diagonal principal: %d", soma);
}