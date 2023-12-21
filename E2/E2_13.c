#include <stdio.h>

// Struct, um Daten eines Artikels aufzunehmen
typedef struct {
    int artikelNummer;
    int anzahl;
    float preis;
    char bezeichnung[50];
} t_artikel;


// Vorwäertdeklarationen
void printArtikel(t_artikel artikel);
float sell(int anzahl, t_artikel * partikel);

// Hauptprogramm
int main() {

    // Deklaration und Initialisierung
    t_artikel artikel = {1, 20, 1.10, "Mars"};

    printArtikel(artikel);

    // 3 Artikel verkaufen, Referenz auf Artikel übergeben
    float total = sell(3, &artikel);

    printf("\nArtikel verkaufen:\n");
    printf("Die Artikel kosten zusammen: %.2f\n", total);
    printf("Jetzt sind noch %d Artikel am Lager\n\n", artikel.anzahl);

    printArtikel(artikel);

    return 0;
}

//Ausgabe eines Artikels auf der Konsole
void printArtikel(t_artikel artikel) {
    printf("Artikelnummer: %d", artikel.artikelNummer);
    printf("\tAnzahl: %d", artikel.anzahl);
    printf("\tPreis:  %.2f", artikel.preis);
    printf("\tBezeichnung: %s\n", artikel.bezeichnung);
}

//Zählt die angegebene Anzahl ab und berechnet Verkaufspreis
float sell(int anzahl, t_artikel * partikel) {

    // Anzahl reduzieren
    partikel->anzahl = (partikel->anzahl) - anzahl;

    //Preis berechnen und zurückgeben
    return (partikel->preis) * anzahl;
}
