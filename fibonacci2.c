/*--------------------------------------------
QUESTAO 8)
Elabore um programa que leia um nÃºmero N > 0, e em seguida leia N nÃºmeros inteiros.
ApÃ³s a leitura dos N nÃºmeros, seu programa deve imprimir a mensagem "forma seq" se os N nÃºmeros lidos formarem a sequÃªncia de fibonacci, ou a mensagem "nao forma seq", em caso contrÃ¡rio.

--------------------------------------------*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
    int N;
    printf("Digite a quantidade de números: ")
    do{
        scanf("%d", &N);
    }while(N < 0);

    int vetor[N], i, j, aux;
    printf("Digite os números: ");
    for (i = 0; i < N; i++){
        scanf("%d", vetor[i]);
    }

    for (i = N - 1; i <= 1; i--){
        for (j = 0; j < i; j++){
            if (vetor[j] > vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }

        }
    }
    for (i = N - 1; i <= 1; i--){
        if (vetor[i] == vetor[i-1] + vetor[i-2]){

        }


    }

    return 0;
}

