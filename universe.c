#include <stdlib.h>
#include <stdio.h>

void mover(int, char, char, char);

int main(void) {
  short int numdiscos;

  while (1) {
     printf("\ndigite a quantidade de discos\n");
     scanf("%d", &numdiscos);
     if (numdiscos < 1) return 0;
     mover(numdiscos,'O','T','D');
  }
  return 0;
}


void mover(int n, char Orig, char Temp, char Dest) {
  if (n==1) 
    printf("Mova o disco 1 da haste %c para a haste %c\n",Orig,Dest);
  else {
    mover(n-1,Orig,Dest,Temp);
    printf("Mova o disco %d da haste %c para a haste %c\n",n,Orig,Dest);
    mover(n-1,Temp,Orig,Dest);
  }
}
