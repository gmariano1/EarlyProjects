/*-------------------------------------------
QUESTAO 3)
Elabore um programa que leia um inteiro N > 0, correspondendo Ã  ordem de uma
matriz quadrada de inteiros. ApÃ³s a leitura de N, seu programa deve ler, linha a linha,
todos os elementos da matriz. ApÃ³s a leitura dos elementos da matriz, seu programa deve:

imprimir a mensagem "elementos superiores maiores", se cada elemento da primeira linha for
maior que o elemento correspondente da Ãºltima linha; ou "elementos superiores menores", em
caso contrario
-------------------------------------------*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
    int N;

    printf("Digite o tamanho da matriz: ");
    do{
        scanf("%d", &N);

    }while (N <= 0);

    int matriz[N][N], i, j, superior = 0, inferior = 0;

    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            scanf("%d", &matriz[i][j]);
        }

    }

    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            printf("%3d", matriz[i][j]);
            if (i == 0){
                superior += matriz[i][j];
            }
            if (i == N - 1){
                inferior += matriz[i][j];
            }
        }
        printf("\n");
    }
    if (superior > inferior){
        printf("Elementos superiores maiores.\n");
    }
    else
        printf ("Elementos inferiores maiores.\n");

    return 0;
}
