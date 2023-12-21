/**
    Setzt den EXOR-Operator ein.
**/

#include <stdio.h>
#include <ctype.h>

int main() {

    char text[] = "Dies ist ein kleiner Test.";

    // Gibt Fehler  bei Ausführung, da Konstante
    //char * text = "Dies ist ein kleiner Test.";


    // Zeiger auf Zeichenkette ausrichten
    char * pc = text;

    printf("%s\n", text);

    // Solange Endzeichen 0 nicht erreicht.
    while ( (*pc) ) {

        // Kleionbuchstabe durch Grussbuchstabe ersetzen:
        if ( islower ( *pc )) {
           *pc = toupper(*pc);
        }

        // Zeiger um eins erhöhen
        pc++;
    }

    printf("%s\n", text);
    return 0;
}
