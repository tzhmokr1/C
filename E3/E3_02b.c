/**
    Einsatz von Funktionszeigern
**/

#include <stdio.h>
#include <unistd.h>   // F�r Funktion sleep()



#define MAX_FUNCTIONS = 10;

// Vorw�rtsdeklarationen
void printRed();
void printOrange();
void printGreen();
void addFunction(void (*ptr) (void));
void execute();


void* fPointer[10];
int nextIndex = 0;

int main() {


    // Funktionen einf�gen
    void (*ptr1) (void);
    ptr1 = printRed;
    addFunction(ptr1);

    void (*ptr2) (void);
    ptr2 = printOrange;
    addFunction(ptr2);

    void (*ptr3) (void);
    ptr3 = printGreen;
    addFunction(ptr3);

    // Orange erneut einf�gen
    addFunction(ptr2);

    // Rot erneut einf�gen
    addFunction(ptr1);

    execute();

    return 0;

}

void addFunction(void (*ptr) (void)) {
    fPointer[nextIndex++] = ptr;
}

void execute() {
    int i=0;
    for (i; i<nextIndex; i++) {

        // Zeigerdeklaration
        void (*ptr) (void);

        // Zeiger zuweisen
        ptr = fPointer[i];

        // Funktion ausf�hren
        (*ptr) ();

        // 1 Sekunde warten
        sleep(1);
    }
}

void printRed() {
    printf("Ampel ist rot.\n");
}
void printOrange() {
    printf("Ampel ist orange.\n");
}
void printGreen() {
    printf("Ampel ist gruen.\n");
}


