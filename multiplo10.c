#include<stdio.h>
#include<stdlib.h>

int main(){
    int num = 1;
    while(num <= 100){
        if (num % 10 == 0){
            printf("Multiplo de 10: %d\n", num);
        }
        else
            printf("%d\n", num);

        num++;
    }

    return 0;
}
