/**
    Zeigt die Funktion einer Symbolischen Konstante

    Wenn das Programm mit gcc -E E3_8.c übersetzt wird,
    sieht man, wie der Precompiler KONSTANT durch 23 ersetzt.

    Konsolenoutput bei gcc -E E3_6.c (Teilansicht):

    int main() {
        int a = 23;
        int b = a + 23;
        return 0;
    }

**/

#define KONSTANT 23
int main() {
    int a = KONSTANT;
    int b = a + KONSTANT;
    return 0;
}

