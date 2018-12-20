/*-------------------------------------------

QUESTAO 4)
Elabore um programa que leia dois numeros inteiros L e C, ambos maiores que zero,
correspondendo Ã s quantidades de linhas e colunas de uma matriz de inteiros. Caso o nÃºmero
L seja menor ou igual a zero, apenas ele deve ser lido novamente atÃ© que se obtenha um
valor vÃ¡lido; o mesmo ocorre com o nÃºmero C. ApÃ³s a leitura de L e C, seu programa deve ler,
linha a linha, todos os elementos de uma matriz LxC. ApÃ³s a leitura dos elementos da matriz, seu programa deve:

imprimir a soma de todos os elementos do miolo, seguida da soma de todos os elementos
da moldura da matriz.

--------------------------------------------*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
    int L, C;
    printf("Digite o número de linhas: \n");
    do{
        scanf("%d", &L);

    }while(L <= 0);
    printf("Digite o número de colunas: \n");
    do{
        scanf("%d", &C);

    }while(C <= 0);
    int matriz[L][C], i, j, miolo = 0, moldura = 0;
    printf("Digite os valores da matriz: \n");
    for (i = 0; i < L; i++){
        for (j = 0; j < C; j++){
            scanf("%d", &matriz[i][j]);
        }

    }

    for (i = 0; i < L; i++){
        for (j = 0; j < C; j++){
            printf("%3d", matriz[i][j]);
            if (i == (L - 1)/2 && j == (C - 1)/2){
                miolo += matriz[i][j];
            }
            else
                moldura += matriz[i][j];
        }
        printf("\n");
    }
    if(L % 2 == 0){
        printf("Não tem miolo.\n");
        printf("%d\n", moldura);
    }
    else{
        printf("%d\n", miolo);
        printf("%d\n", moldura);
    }
    return 0;
}
