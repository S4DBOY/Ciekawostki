#include <stdio.h>

int * getRandom( ) {

   static char  r[10] = "hello";
   printf( "r = \"%s\"\n",r); // wyświetla zawartość tablicy

   return r;
}

int main () {

   char *p; // wskaźnik do którego będzie przekazywana tablica char'ów

   p = getRandom();
   printf( "*(p) : %s\n",p);
   free(p); // zwalnia pamięć po wskaźniku <- Ważne!!
   return 0;
}
