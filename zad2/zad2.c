#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 #define ROZMIAR 5
 int main()
 {
   srand(time(0));
   int tab[ROZMIAR];
   int i;
   for(i=0; i<5; i++)
   {
     tab[i]=rand()%5;
   }
   for (i = 0; i<5; i++) {
printf("%d\n",tab[1] );
   }

   return 0;
 }
