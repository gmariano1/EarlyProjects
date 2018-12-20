/*--------------------------------------------
QUESTAO 5) e 6)
Elabore um programa que leia um nÃºmero N > 0, e em seguida leia N nÃºmeros inteiros.
ApÃ³s a leitura dos N nÃºmeros, seu programa deve imprimir todos os N nÃºmeros lidos
que forem maiores que a mÃ©dia dos N nÃºmeros.

--------------------------------------------*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int N;
    printf("Digite o tamanho do vetor: \n");
    do{
        scanf("%d", &N);

    }while(N <= 0);
    int vetor[N], media = 0, i;
    printf("Digite os %d números: \n", N);
    for (i = 0; i < N; i++){
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < N; i++){
        media += vetor[i];
    }
    media = media/N;
    system("clear");
    printf("Os números maiores que a média são: \n");

    for (i = 0; i < N; i++){
        if (media < vetor[i]){
            printf("%d\n", vetor[i]);
        }
    }
    printf("E a média é %d.\n", media);
    return 0;
}
