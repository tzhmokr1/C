/**
    Beispiel für Rekursion zur Berechnung
    der Fakultät.
**/

#include <stdio.h>


// Forwärtdeklaration
int fakultaet(int x);


int main() {
    int i=4;
    int result = fakultaet(i);
    printf("Fakultaet von %d ist %d\n", i, result);
    return 0;
}

int fakultaet(int x) {

   //Abbruchbedingung
   if (x == 1) return 1;

   // rekursion
   return x * fakultaet(x-1);

}

