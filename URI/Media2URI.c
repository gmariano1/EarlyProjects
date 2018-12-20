#include <stdio.h>
int main(void){
    double A, B, C, MEDIA;
    scanf("%lf %lf %lf", &A, &B, &C);
    MEDIA = ((A*2) + (B*3) + (C*5))/ 10;
    if(A < 0 || A > 10 || B < 0 || B > 10 || C < 0 || C > 10){
        return 1;
    }
    printf("MEDIA = %.1f\n", MEDIA);
    return 0;
}
