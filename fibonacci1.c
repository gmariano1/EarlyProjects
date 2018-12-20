/*--------------------------------------------
QUESTAO 7)
Elabore um programa que leia dois nÃºmeros I e F, ambos maiores que 0 e I < F. Seu
programa deve garantir que I seja maior que zero antes de ler o nÃºmero F, e deve
ler os dois nÃºmeros novamente apenas se I >= F.

ApÃ³s a leitura dos nÃºmeros I e F, seu programa deve imprimir todos os nÃºmeros da
sequÃªncia de Fibonacci entre I e F inclusive.

--------------------------------------------*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
    int I, F, i, fib = 0, primeiro = 0, segundo = 1;
    do{
        printf("Digite o primeiro valor: ");
        scanf("%d", &F);
    }while(F <= 0);

    do{
        printf("Digite o segundo valor: ");
        scanf("%d", &I);
    }while(I >= F);

    for (i = 0; i < F; i++){
        fib = primeiro + segundo;
        primeiro = segundo;
        segundo = fib;

        if (fib <= F && fib >= I){
            printf("%d\n", fib);
        }

    }
    return 0;
}
