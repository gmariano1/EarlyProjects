#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){
    int reais = 0;
    float valortotal = 0, centavos;
    printf("Agora b: ");
    scanf("%f", &valortotal);
    reais = valortotal;
    centavos = valortotal - reais;
    printf("O valor da subtração é: %f", centavos);
    printf("Reais %d", reais);


    return 0;
}
