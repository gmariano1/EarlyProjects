#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float morango (float peso){
    float preco;
    preco = peso * 2.5;
    return preco;
}

float maca (float peso){
    float preco;
    preco = peso * 1.8;
    return preco;
}

float pera (float peso){
    float preco;
    preco = peso * 8.9;
    return preco;
}

int main(){
    float pesomorango = 0, pesomaca = 0, pesopera = 0, resultmorango, resultmaca, resultpera;
    printf("Entre com o peso do morango: ");
    scanf("%f", &pesomorango);
    printf("Entre com o peso da maca: ");
    scanf("%f", &pesomaca);
    printf("Entre com o peso da pera: ");
    scanf("%f", &pesopera);
    resultmorango = morango(pesomorango);
    resultmaca = maca(pesomaca);
    resultpera = pera(pesopera);
    printf("O preco do morango %.2f, o da maca %.2f e o da pera %.2f", resultmorango, resultmaca, resultpera);

    return 0;
}
