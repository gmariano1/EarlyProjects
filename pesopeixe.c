#include<stdio.h>
#include<stdlib.h>

int main(){
    float pesopeixe, multa, excesso;
    printf("Entre com o peso do peixe: ");
    scanf("%f", &pesopeixe);
    if(pesopeixe <= 50){
        printf("\nPeso está dentro do limite legal.\n");
    }else{
        excesso = pesopeixe-50;
        multa = excesso*4.00;
        printf("\nO excesso e de %.2f e a multa e de %.2f reais\n", excesso, multa);
    }

    return 0;
}
