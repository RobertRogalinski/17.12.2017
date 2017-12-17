#include <stdio.h>
#include <stdlib.h>

int spr(int x)
{
  int k=1;
  int n=x;
  while (n!=0)
   {
    if(n&1==1)
  {
    printf("%d bit jest 1\n", k );
  }
  k++;
  n>>=1;
  }
}
int main()
{
  int liczba=0;
  printf("Podaj liczbę" );
  while (liczba<=0)
   {
    scanf("%d", &liczba );
    }
    spr(liczba);
  return 0;
}
