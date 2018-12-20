#include<stdio.h>
#include<stdlib.h>

struct caixa{
    long long int marrom, verde, branca;

};

int main(void){
    struct caixa caixaum, caixadois, caixatres;
    int cont;
    FILE *file;
    file = fopen("garrafas.eco", "r+");
    fscanf(file, "%lld %lld %lld %lld %lld %lld %lld %lld %lld",);
    fclose(file);



    return 0;
}
