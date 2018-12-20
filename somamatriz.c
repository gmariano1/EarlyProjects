#include<stdio.h>
#include<stdlib.h>
#define LINHA 3
#define COLUNA 3

int main(void){
    int matriz[LINHA][COLUNA], i, j, soma = 0;
    printf("Digite nove números: \n");
    for(i=0; i < LINHA; i++){
        for(j=0; j < COLUNA; j++){
            printf("Elemento %d %d: ", i, j);
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] < 0){
                return 1;
            }
        }
    }

    for(i=0; i < LINHA; i++){
        for(j=0; j < COLUNA; j++){
            printf("%3d", matriz[i][j]);
            if (i == (LINHA-1)/2 && j == (COLUNA-1)/2){
                soma += matriz[i][j];
            }
        }

        printf("\n");
    }


    printf("%d", soma);


    return 0;
}
