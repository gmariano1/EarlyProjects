#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void){
	int a=0,b=0;
	float c=0;
	printf ("Escreva o primeiro cateto: \n");
	scanf ("%d", &a);
	printf ("Agora o segundo cateto: \n");
	scanf ("%d", &b);
	c=sqrt((a*a)+(b*b));
	printf ("Letra c é: %.2f \n", c); 
	


	return (0);
}

