#include <stdio.h>
#include <stdlib.h>
/*
 *
 *
 * Matr.: 13/0108022
 * Trab.: 0008
 *
 *
 */

 int main(void){
   FILE *p = fopen("garrafas.eco","r");
   int n=3,i,j,somaa=0,somab=0,somac=0,somad=0,somae=0,somaf=0;
	if(p == NULL){
			printf("Erro, nao foi possivel abrir o arquivo\n");
	}	else{
    int mat[n][n];
    do{
      for (i=0;i<n;i++){
        for(j=0;j<n;j++){
          fscanf(p,"%d",&mat[i][j]);
        }//exit for dentro
      }//exit for fora

      somaa = mat[0][0] + mat[0][1] + mat[1][1] + mat[1][2] + mat[2][0] + mat[2][2];
      somab = mat[0][0] + mat[0][1] + mat[1][0] + mat[1][2] + mat[2][1] + mat[2][2];
      somac = mat[0][1] + mat[0][2] + mat[1][0] + mat[1][1] + mat[2][0] + mat[2][1];
      somad = mat[0][1] + mat[0][2] + mat[1][0] + mat[1][2] + mat[2][0] + mat[2][1];
      somae = mat[0][0] + mat[0][2] + mat[1][0] + mat[1][1] + mat[2][1] + mat[2][2];
      somaf = mat[0][0] + mat[0][2] + mat[1][1] + mat[1][2] + mat[2][0] + mat[2][1];

      for (i=0;i<n;i++){
        for(j=0;j<n;j++){
          printf("%d ",mat[i][j]);
        }//exit for dentro
        printf("\n");
      }//exit for fora

      printf("SOMA A BMV =%d\n",somaa);
      printf("SOMA B BVM =%d\n",somab);
      printf("SOMA C MBV =%d\n",somac);
      printf("SOMA D MVB =%d\n",somad);
      printf("SOMA E VBM =%d\n",somae);
      printf("SOMA F VMB =%d\n",somaf);



    }while( (fscanf(p,"%d",&mat[i][j]))!=EOF );
	}
	fclose(p);

   return(0);
}
