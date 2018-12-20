#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, n=0;
	float med=0;	
	printf ("Digite a quantidade de números da média que vc quer calcular: ");
	scanf ("%d", &n);
	for (i=0; i<n; i++) {
		float v=0;
		printf ("Digite os valores da média: ");
		scanf ("%f", &v);
		med = med + v;
	}
	med = med / n;
	printf ("O valor da média eh: %.2f\n ", med);
	return 0;
}
		
