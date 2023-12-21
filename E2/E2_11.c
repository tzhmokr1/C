#include <stdio.h>

/**
    sizeof() bestimmt die Grösse des übergebenen Datentyps.
    Dummy ist ein Zeiger auf das erste Element eines char-Arrays.
    Die Groesse eines Zeigers haengt von der Plattform ab; entweder 
    32 oder 64 Bit bzw. 4 oder 8 Byte.
**/


int main() {
    char * dummy = "zwei";
    printf("%d\n", sizeof(dummy));
    return 0;
}


