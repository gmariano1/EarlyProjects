#include<stdio.h>
#include<stdlib.h>

int main(void){
    long int compra, pagamento, troco, lembratroco;
    int um = 0, cinco = 0, dez = 0, vinte = 0, cinquenta = 0;
    printf("Digite o valor da compra: \n");
    scanf("%ld", &compra);
    if (compra <= 0){
        printf("Nenhuma compra foi efetuada\n");
        return 1;
    }
    printf("Digite o valor do pagamento: \n");
    scanf("%ld", &pagamento);
    if (pagamento < 0){
        printf("Nenhuma compra foi efetuada\n");
        return 1;
    }
    if (compra > pagamento){
        printf("Falta %ld\n", compra - pagamento);
        return 1;
    }
    if (compra == pagamento){
        printf("Tudo certo. Obrigado\n");
        return 1;
    }
    troco = pagamento - compra;
    lembratroco = troco;


    while (troco > 0){

      if ((troco >= 1) && (troco < 5))
      {
        um = um + 1;
        troco = troco - 1;
      }
      if ((troco >= 5) && (troco < 20))
      {
        cinco = cinco + 1;
        troco = troco - 5;
      }
      if ((troco >= 10) && (troco < 50))
      {
        dez = dez + 1;
        troco = troco - 10;
      }
      if ((troco >= 50) && (troco < 100))
      {
        vinte = vinte + 1;
        troco = troco - 20;
      }

      if (troco >= 100)
      {
        cinquenta = cinquenta + 1;
        troco = troco - 50;
      }
    }
    while (cinquenta >= vinte){
        cinquenta = cinquenta - 1;
        vinte = vinte + 2;
        dez = dez + 1;
    }
    printf("Troco %ld = %d x 50 + %d x 20 + %d x 10 + %d x 5 + %d x 1\n", lembratroco, cinquenta, vinte, dez, cinco, um);





    return 0;
}
