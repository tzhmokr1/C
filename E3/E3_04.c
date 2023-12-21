#include <stdio.h>

/**
    Einsatz einer statischen Variablen.
    Obwohl die Variable innerhalb des Funktionsblocks steht
    wir die Initialisierung nur ein einziges Mal aufgerufen.
    Der Gültigkeitsbereich der Variablen ist auf den Funktionsblock
    begrenzt, sie "überlebt" aber das Ende der Funktion.
**/


void iCanCountMyself() {
    static int counter = 1;
    printf("Ich wurde %d mal aufgerufen\n", counter);
    counter++;
}



int main() {
    int i=0;
    for (i; i<5; i++) {
        iCanCountMyself();
    }
    return 0;
}

