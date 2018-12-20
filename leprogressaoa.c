/*--------------------------------------------
QUESTAO 10)
Elabore um programa que leia um arquivo numeros.txt contendo uma sequÃªncia de
nÃºmeros inteiros e imprima "forma seq", se os nÃºmeros lidos formarem uma
P.A. (progressÃ£o aritmÃ©tica). */
#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE *fp;
    fp = fopen("numeros.txt", "r");
    int primeiro, segundo, num, razao, ant;
    fscanf(fp, "%d", &primeiro);
    fscanf(fp, "%d", &segundo);
    razao = segundo - primeiro;
    ant = segundo;
    while (fscanf(fp, "%d", &num) != EOF){
        num = num - ant;
        ant = num;
        if (num == razao){
            printf("Forma P.A\n");
        }
        else
            printf("Não forma P.A\n");

    }
    printf("%d\n", primeiro);
    printf("%d\n", segundo);
    printf("%d\n", razao);

    fclose(fp);
    return 0;
}
