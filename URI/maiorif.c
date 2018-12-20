#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a > b && a > c){
        printf("%d eh maior", a);
    }
    else if(b > a && b > c){
        printf("%d eh maior", b);
    }
    else{
        printf("%d eh maior", c);
    }
    return 0;
}
