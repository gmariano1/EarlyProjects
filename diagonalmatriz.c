#include<stdio.h>
#include<stdlib.h>

int main(){
    int N;
    printf("Digite o tamanho da matriz: ");
    scanf("%d", &N);
    if (N < 0){
        printf("Número menor que zero.");
        return 1;
    }
    int i, j, matriz[N][N], diagonal1 = 0, diagonal2 = 0;

    printf("Digite os números da matriz: \n");
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            scanf("%d", &matriz[i][j]);
        }

    }

    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            printf("%3d", matriz[i][j]);
            if (i == j){
                diagonal1 += matriz[i][j];
            }
            if (i + j == N - 1){
                diagonal2 += matriz[i][j];
            }
        }
        printf("\n");
    }
    if (diagonal2 >= diagonal1){
        printf("Secundária maior ou igual.\n");
    }
    else
        printf("Principal maior.\n");

    printf ("%d\n", diagonal2);
    printf ("%d\n", diagonal1);



    return 0;
}
