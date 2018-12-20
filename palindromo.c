#include<stdio.h>
#include<stdlib.h>
/*
 *
 *
 * Matr.: 14/0082778
 * Trab.: 0005
 *
 *
 */
int inverte (long int n);

int main (void){
    long int numero = 0, inverso = 0, soma = 0, somainv = 0;
    int cont = 0;
    printf("Digite um numero inteiro: \n");
    scanf("%ld", &numero);
    do
    {
        inverso = inverte(numero);
        soma = (numero + inverso);
        somainv = inverte(soma);
        cont++;
        numero = soma;

    }while((cont < 26) && (soma != somainv));
    if (cont == 1){
        printf("Produziu palindromo %ld com 1 soma", somainv);
    }
    else if (cont < 26){
        printf("Produziu palindromo %ld com %d somas", somainv, cont);
    }
    else
        printf("Não produziu palindromo");


    return 0;
}

int inverte (long int num){
  long int numi = 0;
  while (num > 0){
    numi = numi * 10+ num % 10;
    num = num/10;
  }
  return numi;
}
