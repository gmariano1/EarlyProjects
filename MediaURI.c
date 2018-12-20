#include <stdio.h>
int main(void){
    double A, B, MEDIA;
    scanf("%lf %lf", &A, &B);
    if(A < 0 || A > 10 || B < 0 || B > 10){
        return 1;
    }
    MEDIA = ((A * 3.5) + (B * 7.5))/11;
    printf("MEDIA = %.5f\n", MEDIA);
    return 0;
}
