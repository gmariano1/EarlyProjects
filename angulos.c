#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.14159265359
/*
 * Matricula.: 14/0082778
 * Trabalho.: 0001
 *
 */

int main(void)
{
    float graus = 0;
    double seno, cosseno, tangente, radianos;
    printf("Digite um valor em graus: ");
    scanf ("%f", &graus);
    radianos = graus * PI / 180;
    printf("O valor em radianos: %f\n", radianos);
    seno = sin(radianos);
    if((seno > -0.0001)&&(seno < 0.0001)){
      seno = fabs(seno);
      printf("seno(%.2f)= %.4f\n", graus, seno);
    }
    else{
    printf("seno(%.2f)= %.4f\n", graus, seno);
    }
    cosseno = cos(radianos+PI);
    if((cosseno > -0.0001)&&(cosseno < 0.0001)){
      cosseno = fabs(cosseno);
      printf("cosseno(%.2f+PI)= %.4f\n", graus, cosseno);
    }
    else{
      printf("cosseno(%.2f+PI)= %.4f\n", graus, cosseno);
    }
    tangente = tan(radianos+3*PI/2);
    if((graus == 90) || (graus == 270)){
      printf("tangente(%.2f+3PI/2)= inf\n", graus);
    }
    else
      printf("tangente(%.2f+3PI/2)= %.4f\n", graus, tangente);




    return 0;
}
