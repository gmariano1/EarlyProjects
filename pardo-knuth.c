#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int potencia(int number) {

    return sqrt(abs(number)) * pow(number, 3);
}

int main(){
    int vetor[11], i, y = 0, j = 11;
    printf("Digite onze números! \n");
    for(i = 0; i < 11; i++) {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 5; i++, j--) {
        y = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = y;
    }
    for(i = 0; i < 11; i++) {
        y = potencia(vetor[i]);
        y > 400 ? puts("Valor muito grande") : printf("%d\n", y);
    }


    return 0;
}
