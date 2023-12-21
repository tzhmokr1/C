#include <stdio.h>

int main() {

    int a,b,c;

    printf("a = 10; b = 3;\n");

    a = 10; b = 7;
    c = ++a;
    printf("c = ++a; \t\t[Ergebnis: c=%d]\n", c);

    a = 10; b = 7;
    c = b-- * a;
    printf("c = b-- * a; \t\t[Ergebnis: c=%d]\n", c);

    a = 10; b = 7;
    c = --b * a;
    printf("c = --b * a; \t\t[Ergebnis: c=%d]\n", c);

    a = 10; b = 7;
    c = a % b * a;
    printf("c = a %% b * a; \t\t[Ergebnis: c=%d]\n", c);

    a = 10; b = 7;
    c = a % (b * a);
    printf("c = a %% (b * a); \t[Ergebnis: c=%d]\n", c);

    return 0;

}

