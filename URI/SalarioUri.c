#include <stdio.h>
int main(void){
    int FUNCIONARIO, HORAS;
    float VALOR, SALARIO;
    scanf("%d %d %f", &FUNCIONARIO, &HORAS, &VALOR);
    SALARIO = HORAS * VALOR;
    printf("FUNCIONARIO = %d", FUNCIONARIO);
    printf("SALARIO = R$ %.2f\n", SALARIO);
    return 0;
}
