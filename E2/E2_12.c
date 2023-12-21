#include <stdio.h>

// Struct, um Daten eines Artikels aufzunehmen
typedef struct {
    int artikelNummer;
    int anzahl;
    float preis;
    char bezeichnung[50];
} t_artikel;


// Vorwärtdeklaration
void printArtikel(t_artikel artikel);

// Hauptprogramm
int main() {

    // Deklaration und Initialisierung
    t_artikel artikel = {1, 20, 1.10, "Mars"};
    t_artikel artikel2 = {2, 15, 2.30, "Kaugummi"};

    // Ausgabe
    printArtikel(artikel);
    printArtikel(artikel2);

    return 0;
}

//Ausgabe eines Artikels auf der Konsole
void printArtikel(t_artikel artikel) {
    printf("Artikelnummer: %d", artikel.artikelNummer);
    printf("\tAnzahl: %d", artikel.anzahl);
    printf("\tPreis:  %.2f", artikel.preis);
    printf("\tBezeichnung: %s\n", artikel.bezeichnung);
}


