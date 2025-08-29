//3. Criar uma matriz 2×2, preenchê-la e encontrar o maior elemento.
#include <stdio.h>

int main(){
    int matriz[2][2];//Criar matriz 2x2
    int i, j, maior;

    //Preencher matriz 2x2
    printf("\nDigite os elementos da matriz 2x2: \n");
    for (i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    //Encontrar o maior elemento
    maior = matriz[0][0]; //Assume o valor da primeira linha e primeira coluna como maior
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }
    }

    //Mostrar o maior elemento
    printf("\nMaior elemento: %d\n", maior);

    return 0;
}