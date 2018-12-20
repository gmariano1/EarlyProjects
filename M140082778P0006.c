/*
 *
 *
 * Matr.: 14/0082778
 * Trab.: 0006
 *
 *
 */
#include <stdio.h>

int main(void){

    long long int cont, verdade, ordem, numero, num;
    int esquisitos[1501];

			do{
					printf("Digite a ordem do numero (entre 1 e 1500): ");
					scanf("%lld", &ordem);
			}while(ordem <= 0 || ordem > 1500);

			cont = 1;
			numero = 0;
			verdade = 1;
			num = 0;

			do{
					num++;
					numero = num;

					while(numero%2 == 0){
							numero = numero/2;
					}
					while(numero%3 == 0){
							numero = numero/3;
					}
					while(numero%5 == 0){
							numero = numero/5;
					}

					if(numero == 1){
							esquisitos[cont] = num;
							cont++;

							if(cont > ordem){
									verdade = 2;
							}
					}

			}while(verdade == 1);


			printf("Numero esquisito de ordem %lld = %d\n", ordem, esquisitos[ordem]);

			return 0;

}
