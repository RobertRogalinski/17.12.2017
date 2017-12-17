#include <stdio.h>
#include <stdlib.h>

int funkcja(int a, int b )
{
  int w;
if(b==0)
{
  return 1;
}
else
{
  w=a*funkcja(a, b-1);
  }
  return w;
}
int main()
{
int n,k;
printf("Podaj n" );
scanf("%d", &n );
while(n<=0)
{
  printf("Podaj liczbę n większą od 0" );
scanf("%d",&n );
}
printf("podaj k" );
scanf("%d", &k );
while (k<=0)
{
  printf("Podaj k wieksze od 0" );
  scanf("%d", &k );
}
int wynik=funkcja(n,k);
printf("Wynik %d\n", wynik );
  return 0;
}
