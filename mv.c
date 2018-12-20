#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

float media (int n, float* v)
{
	int i;	
	float s=0;
	for (i=0; i < n; i++)
		s += v[i];
	return s/n;
}
float variancia (int n, float* v, float m)
{
	int i;
	float s=0;
	for (i=0; i < n; i++)
		s += (v[i] - m) * (v[i] - m);
	return s/n;
}

int main (void){
	textbackground(BLUE);
	int num=5;
	float v[num];
	float med=0, var=0;
	int i;
	
	for (i=0; i < num; i++){
		printf ("Digite o valor %d: ", i+1);
		scanf ("%f", &v[i]);
		if (v[i] < 0){
			system("clear");
			return 0;
		}
	}
	med = media(num, v);
	var = variancia(num, v, med);
	system("clear");
	printf ("Media = %.2f Variancia = %.2f \n", med, var);
	return 0;
}
