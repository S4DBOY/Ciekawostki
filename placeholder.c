#include <stdio.h>

/* function to generate and return random numbers */
int * getRandom( ) {

   static char  r[10] = "hello";
      printf( "r = \"%s\"\n",r);

   return r;
}

/* main function to call above defined function */
int main () {

   /* a pointer to an int */
   char *p;
   int i;

   p = getRandom();
   sprintf(p,"%sszwa",p);
    printf( "*(p) : %s\n",p);
    free(p);
   return 0;
}
