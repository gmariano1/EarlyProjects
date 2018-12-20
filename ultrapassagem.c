#include<stdio.h>
#include<stdlib.h>
int main()
{
	int cont=0;
	float augusto=1.40, ricardo=1.10;
	while (augusto > ricardo){
		cont++;
		augusto = augusto+0.08;
		ricardo = ricardo+0.17;
	};		

	
	printf ("Ricardo tem %f enquanto Augusto tem %f, e foram necessários %d anos para isso ocorrer.\n",ricardo, augusto, cont);
	return 0;
}
