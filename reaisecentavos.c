#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int reais;
    float centavos, valortotal = 0;
    printf("Coloque um valor em reais: ");
    scanf("%f", &valortotal);
    reais = valortotal;
    centavos = valortotal - reais;

    printf("Você tem %d real(is)\n", reais);
    printf("E %.2f centavos\n", centavos);


    return 0;
}
