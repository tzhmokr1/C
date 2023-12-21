/**
    Berechnet Sinuswerte von 0 .. PI.
    Dabei werden BUF_SIZE Teilwerte berechnet.

    Die Konstante M_PI ist in math.h wie folgt festgelegt:
    #define M_PI        3.14159265358979323846

**/

#include <stdio.h>
#include <math.h>

#define BUF_SIZE 100

int main() {

   double angle[BUF_SIZE];      // Buffer für Winkel
   double value[BUF_SIZE];      // Buffer für Sinuswerte

   int i;

   // Werte berechen
   for (i=0; i<BUF_SIZE; i++) {
       angle[i] = i * (M_PI/(BUF_SIZE-1));
       value[i] = sin(angle[i]);
   }

   // Ausgabe
   for (i=0; i<BUF_SIZE; i++) {
       printf("Der Sinus von %.3f ist: %.3f\n", angle[i], value[i]);
   }

   return 0;

}

