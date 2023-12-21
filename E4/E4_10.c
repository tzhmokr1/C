/**
    Beispiel f�r Rekursion zur Berechnung
    der Fakult�t.
**/

#include <stdio.h>


// Forw�rtdeklaration
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

