#include<stdio.h>
#include<stdlib.h>

int main(void){
    int reais, centavos;
    long long int valorcentavos;
    printf("Digite a quantidade de centavos: \n");
    scanf ("%f", &valorcentavos);
    if (valorcentavos <= 0){
        printf("Fim do programa\n");
        return 1;
    }
    reais = valorcentavos/100;
    centavos = valorcentavos - reais*100;
    if (reais == 1 && centavos == 1)
    {
        printf("1 real e 1 centavo\n");
        printf("Fim do programa\n");
    }
    else if (reais == 1 && centavos == 0)
    {
        printf("1 real\n");
        printf("Fim do programa\n");
    }
    else if (reais == 1 && centavos > 0)
    {
        printf("1 real e %d centavos\n", centavos);
        printf("Fim do programa\n");
    }
    else if (centavos == 1 && reais == 0)
    {
        printf("1 centavo\n");
        printf("Fim do programa\n");
    }
    else if (reais == 0)
    {
       printf("%d centavos\n", centavos);
       printf("Fim do programa\n");
    }

    else if (centavos == 0)
    {
        printf("%d reais\n", reais);
        printf("Fim do programa\n");
    }
    else
    {
        printf("%d reais e %d centavos\n", reais, centavos);
        printf("Fim do programa\n");
    }




    return 0;
}
