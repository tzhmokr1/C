#include <stdio.h>

/**
    Definiert zwei eigene Datentypen
**/

typedef double real;
typedef double * pReal;


int main() {

    // Zahl definieren
    real zahl1 = 3.0;

    // Zeiger auf Zahl ausrichten
    pReal pZahl1 = &zahl1;

    // Wert ändern
    zahl1 = 10.0;

    //Ausgabe
    printf("Die Zahl lautet %.2f\n", zahl1);
     //Ausgabe über Zeiger
    printf("Die Zahl lautet %.2f\n", *pZahl1);

    // Wert der Zahl über Zeiger verändern
    *pZahl1 = 5.0;

    //Ausgabe
    printf("Die Zahl lautet %.2f\n", zahl1);
    //Ausgabe über Zeiger
    printf("Die Zahl lautet %.2f\n", *pZahl1);

    return 0;
}

