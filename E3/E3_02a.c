/**
    Einsatz von Funktionszeigern
**/

#include <stdio.h>


// Vorwärtsdeklarationen
double mul(double x, double y);
void printText(char * text);


int main() {


    // Funktion 1:

    double x = 20.0;
    double y = 10.0;

    double (*ptr) (double, double);
    ptr = mul;

    double z = (*ptr) (x, y);
    printf("Resultat von mul(): %.2f\n", z);


    // Funktion 2:

    char text[] = "Die Netzwerkverbindung ist ausgefallen";
    void (*ptr2) (char *);
    ptr2 = printText;
    (*ptr2) (text);


    return 0;

}


double mul(double x, double y) {
    return x * y;
}

void printText(char * text) {
    printf("%s\n", text);
}
