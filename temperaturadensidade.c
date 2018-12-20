#include<stdio.h>
#include<stdlib.h>

typedef struct temperaturadensidade{
    float temperatura, densidade;
}temperaturadensidade;

void imprimir_grupo(float t, float d){
    printf("\nA temperatura e %f e a densidade e %f\n", t, d);
}

int main(){
    temperaturadensidade temp1;
    temperaturadensidade temp2;
    temperaturadensidade temp3;
    temperaturadensidade temp4;
    temp1.temperatura = 22;
    temp1.densidade = 0.9999;
    temp2.temperatura = 22;
    temp2.densidade = 0.9998;
    temp3.temperatura = 22;
    temp3.densidade = 0.9998;
    temp4.temperatura = 22;
    temp4.densidade = 0.9998;
    imprimir_grupo(temp1.temperatura, temp1.densidade);
    imprimir_grupo(temp2.temperatura, temp2.densidade);
    imprimir_grupo(temp3.temperatura, temp3.densidade);
    imprimir_grupo(temp4.temperatura, temp4.densidade);


    return 0;
}
