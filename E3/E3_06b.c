#include <stdio.h>

/**
    Die externe Variable und die Funktion
    sind in der Datei E3_6a.c implementiert.

    Sie versucht, eine globale Variable und eine
    Funktion einzubinden, die jedoch beide mit static geschützt sind.

    Ein Übersetzen des Programms führt zu Fehlermeldung:
    gcc E3_6a.c E3_6b.c
**/

extern double inverse(double bli);
extern char * HSR;
extern double power(double bli);
extern char * ABTEILUNG;

int main() {

   double x = 4.0;
   printf("%s\n", HSR);
   printf("Der Kehrwert von %.2f ist %.2f\n", x, inverse(x));

   double y = 2.0;
   printf("%s\n", ABTEILUNG);
   printf("Das Quadrat von %.2f ist %.2f\n", y, power(y));

   return 0;

}

