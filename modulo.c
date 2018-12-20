#include<stdio.h>
#include<stdlib.h>

int main(void){

    int num = 0, num1 = 0, numero = 0, modulo = 0, digito = 0, soma = 0, digitov = 0;
    do{
        printf("Digite o módulo 10 ou 11: ");
        scanf("%d", &modulo);
        } while(modulo < 10 || modulo > 11);

    do{
        printf("Digite um número: ");
        scanf ("%d", &num);
        if (num < 10){
            printf("Fim do programa !");
            return 1;
        }
        numero = num;
        num1 = num/10;
        temp = num1;
        digitov = num % 10;

        if (modulo - resto == digitov){
            printf("%d %d - %d dv ok\n", numero, num1, digitov);
        }
        else
            printf("%d %d - %d dv errado\n", numero, num1, digitov);
    } while (1);

    return 0;
}
int calculadv(long int, int){
    int
    while(temp > 0){
            digito = temp % 10;
            temp = temp/10;
            soma = soma + (digito*cont);
            cont++;
        }
        resto = (soma % modulo);


}
