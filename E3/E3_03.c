#include <stdio.h>

/**
    Die Funktion increment funktioniert nur, wenn
    eine Referenz (Zeiger) der zu erhöhenden Variable übergeben wird.

    Wenn die Variable selbst übergeben wird, wird der Wert nur innerhalb
    des Funktionsblocks geändert (die Funktion erhält eine Kopie der
    Parameter). Bei der Speicherklasse auto wird die Kopie nach
    Verlassen der Funktion verworfen.
**/


void increment(int * x) { *x = *x + 1; }

int main() {
    int a=23;
    increment(&a);
    printf("Die Zahl lautet: %d\n", a);
}

