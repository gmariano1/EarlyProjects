#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *tabela;
    tabela = fopen("tabela.txt", "r");
    fclose(tabela);

    return 0;
}
