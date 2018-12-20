/* QUESTAO 4)
Elabore um programa que leia dois numeros inteiros L e C, ambos maiores que zero,
correspondendo Ã s quantidades de linhas e colunas de uma matriz de inteiros. Caso o nÃºmero
L seja menor ou igual a zero, apenas ele deve ser lido novamente atÃ© que se obtenha um
valor vÃ¡lido; o mesmo ocorre com o nÃºmero C. ApÃ³s a leitura de L e C, seu programa deve ler,
linha a linha, todos os elementos de uma matriz LxC. ApÃ³s a leitura dos elementos da matriz, seu programa deve:

imprimir a soma de todos os elementos do miolo, seguida da soma de todos os elementos
da moldura da matriz. */

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int L, C, i, j, somamol = 0, somamio = 0;
    do{
        printf("Dê o numero de linhas: \n");
        scanf("%d", &L);

    }while(L < 0);

    do{
        printf("Dê o numero de colunas: \n");
        scanf("%d", &C);

    }while(C < 0);

    int matriz[L][C];

    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            printf("Elemento[%d][%d]: ", i,j);
            scanf("%d", &matriz[i][j]);
        }

    }

    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            printf("%3d", matriz[i][j]);
            if (i == 0 || j == 0 || i == L - 1 || j == C - 1){
                somamol += matriz[i][j];
            }
            else {
                somamio += matriz[i][j];
            }
        }
        printf("\n");
    }
    printf("Soma do miolo é: %d\n", somamio);
    printf("Soma da moldura é: %d\n", somamol);


    return 0;
}
