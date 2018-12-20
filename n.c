#include<stdio.h>
#include<stdlib.h>

int main(){
    int N, maior = 0;
    while(N > 0){
        printf("Digite N numeros: \n");
        scanf("%d", &N);
        if (N > maior){
            maior = N;
        }
    }
    printf("O maior numero e: %d\n", maior);

    return 0;
}
