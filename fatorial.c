#include<stdio.h>
#include<stdlib.h>

int fatorial(int fat){
    int i;
    if(fat == 0 || fat == 1){
        fat = 1;
        return fat;
    }else{
        for(i = 1; fat > 1; fat = fat - 1){
            fat = fat*i
            return fat;
        }

    }
}
int main(){
    int num = 0, fat = 0;
    printf("Entre com um numero:\n");
    scanf("%d", &num);
    fat = fatorial(num);
    printf("O fatorial é: %d", fat);

    return 0;
}
