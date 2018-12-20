#include<stdio.h>
#include<stdlib.h>


int main(void){
    int num = 0, esquerda = 0, direita = 0, baixo = 0 , cima = 0, total = 0;
    printf("Digite os comandos do veiculo: \n");
    do {
        scanf ("%d", &num);
        if (num == 1){
            direita = direita + num;
        }
        else if (num == -1){
            esquerda = esquerda + num;
        }
        else if (num == 2){
            cima = cima + num;
        }
        else if (num == -2){
            baixo = baixo + num;
        }

    }while(num != 0);
    esquerda = abs(esquerda);
    baixo = abs(baixo);
    total = (direita + cima) - (esquerda + baixo);
    if (total == 0){
        printf ("O veículo fez um caminho fechado");
    }
    else
        printf ("O veículo fez um caminho aberto");

    return 0;
}
