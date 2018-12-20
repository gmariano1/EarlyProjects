#include<stdio.h>
#include<stdlib.h>

int main(){
    int i = 100;
    while(i < 200){
        if(i % 2 == 0){
            printf("%d\n", i + 1);
        }
        i++;
    }

    return 0;
}
