/**
    Zeigt das bitweise Invertieren
**/


#include <stdio.h>

void printBin(int value);

int main() {

    int x = 5000;
    printf("Zahl dezimal: %d\n", x);
    printBin(x);

    x = ~x;
    printf("\nInvertierte Zahl dezimal: %d\n", x);
    printBin(x);

    x = ~x;
    printf("\nNochmals invertierte Zahl dezimal: %d\n", x);
    printBin(x);

    return 0;
}

// zur besseren Visualisierung, gibt Zahl in Binärform aus
void printBin(int value) {

    int result=0;
    int i=0;

    // Anzahl Bit bestimmen
    int anzBits = sizeof(value)*8;

    // Maske initialisieren (vorderstes Bit gesetzt)
    unsigned int mask = 1 << (anzBits-1);

    for (i; i<anzBits; i++) {

        // Verknüpfung
        result = value & mask;

        // Ausgabe
        if (result == 0) { printf("%c", '0'); }
        else { printf("%c", '1'); }

        // Maske shiften, fügt 0 links ein
        mask = mask >> 1;
    }

    // Ausgabe Zeilenumbruch:
    printf("\n");
}
