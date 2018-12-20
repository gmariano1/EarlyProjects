/*
 * Matr.: 14/0082778
 * Trab.: 0009
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* reorganizaString(char *str)
{
	char temp[10];
	int i;
	if (strlen(str) < 4)
	{
		for (i=0;i<4-strlen(str);i++)
			temp[i] = '0';
		temp[i] = '\0';
		strcat(temp, str);
		str = temp;
	}
	else if (strlen(str) > 4)
		str = str+(strlen(str)-4);
return str;
}

int main()
{
	char senha[12], primeiroNome[61], segundoNome[61], matricula[61];
	int i=0, count;
	long senhaNumerica, denominadorInt, numeradorInt;
	FILE *arquivoNomes, *arquivoMatriculas;

	arquivoNomes = fopen("alunos.nomes", "r");
	arquivoMatriculas = fopen("alunos.matriculas", "r");

	while (!feof(arquivoMatriculas))
	{
		strcpy(senha, "");
		fscanf(arquivoNomes, "%s %s", primeiroNome, segundoNome);
		for (count=0;segundoNome[count] != '\0';count++)
			;
		if (strlen(segundoNome) >= 3)
			strncat(senha, (segundoNome+(count-3)), 3);
		else
			strcpy(senha, segundoNome);
		strncat(senha, primeiroNome, 3);
		if (fscanf(arquivoMatriculas, "%s", matricula)!= 1)
			break;
		for (count=0;matricula[count] != '\0';count++)
			;
		numeradorInt = atol(matricula+count-5);
		matricula[2] = '\0';
		denominadorInt = atol(matricula);
		if (denominadorInt != 0)
			senhaNumerica = numeradorInt/denominadorInt;
		else
			senhaNumerica = 0;
		sprintf(matricula, "%ld", senhaNumerica);
		strcat(senha, reorganizaString(matricula));
		printf("%s\n", senha);
		i++;
	}
	if (i>1)
		printf("Foram geradas %d senhas\n", i);
	else
		printf("Foi gerada %d senha\n", i);
return (0);
}
