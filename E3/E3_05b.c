#include <stdio.h>

/**
    Die externe Variable und die Funktion
    sind in der Datei E3_5a.c implementiert.
    Übersetzen des Programms:
    gcc E3_5a.c E3_5b.c
**/

extern double inverse(double bli);
extern char * HSR;

int main() {

   double x = 4.0;
   printf("%s\n", HSR);
   printf("Der Kehrwert von %.2f ist %.2f\n", x, inverse(x));

   return 0;

}

