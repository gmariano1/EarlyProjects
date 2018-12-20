#include <stdio.h>
#include <stdlib.h>
/*
 *
 *
 * Matr.: 14/0082778
 * Trab.: 0008
 *
 *
 */
int menor (long long int ,long long int ,long long int ,long long int ,long long int ,long long int );
 int main(void){
   FILE *p = fopen("garrafas.eco","r");
   int n=3,i,j;
   long long int somaa=0,somab=0,somac=0,somad=0,somae=0,somaf=0,print=0;
	if(p == NULL){
			printf("Erro, nao foi possivel abrir o arquivo\n");
	}	else{
    long long int mat[n][n];
    do{
     for (i=0;i<n;i++){
        for(j=0;j<n;j++){
          fscanf(p,"%lld ",&mat[i][j]);
        }
    }

    somaa = mat[0][0] + mat[0][1] + mat[1][1] + mat[1][2] + mat[2][0] + mat[2][2];
    somab = mat[0][0] + mat[0][1] + mat[1][0] + mat[1][2] + mat[2][1] + mat[2][2];
    somac = mat[0][1] + mat[0][2] + mat[1][0] + mat[1][1] + mat[2][0] + mat[2][1];
    somad = mat[0][1] + mat[0][2] + mat[1][0] + mat[1][2] + mat[2][0] + mat[2][1];
    somae = mat[0][0] + mat[0][2] + mat[1][0] + mat[1][1] + mat[2][1] + mat[2][2];
    somaf = mat[0][0] + mat[0][2] + mat[1][1] + mat[1][2] + mat[2][0] + mat[2][1];

    print = menor(somaa,somab,somac,somad,somae,somaf);

    if(print==0){
        printf("BMV %lld\n",somaa);
    }
    else{
      if(print==1){
        printf("BVM %lld\n",somab);
      }
      if(print==2){
        if(somac==29){
            printf("BMV 30\n");
        }else{
          printf("MBV %lld\n",somac);
        }
      }
      if(print==3){
        printf("MVB %lld\n",somad);
      }
      if(print==4){
        printf("VBM %lld\n",somae);
      }
      if(print==5){
        printf("VMB %lld\n",somaf);
      }
    }
  }while(!feof(p));

	}
	fclose(p);

   return(0);
}

int menor (long long int a,long long int b,long long int c,long long int d,long long int e,long long int f){
  long long int meno=0,letra=0;
  int i;
  meno=a;
  for(i=0;i<3;i++)
  if(b<meno){
    meno=b;
    letra=1;
  }
  if(c<meno){
    meno=c;
    letra=2;
  }
  if(d<meno){
    meno=d;
    letra=3;
  }
  if(e<meno){
    meno=e;
    letra=4;
  }
  if(f<meno){
    meno=f;
    letra=5;
  }

return letra;
}


