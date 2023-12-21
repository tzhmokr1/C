#include <stdio.h>

typedef struct {
    double re;
    double im;
} t_complex;

typedef union {
    double value[2];
    t_complex complex;
} u_complex;


int main() {

    u_complex a;
    u_complex b;

    // Variante 1 : zwei Double
    a.value[0] = 2.0;   //realteil
    a.value[1] = 3.0;    //imaginärteil
    printf("Komplexe Zahl1: Realteil: %.2f, Imaginaerteil: %.2f\n", a.value[0], a.value[1]);

    // Variante 2 : Struct
    t_complex helper = { 2.0, 3.0 };
    b.complex = helper;
    printf("Komplexe Zahl2: Realteil: %.2f, Imaginaerteil: %.2f\n", b.complex.re, b.complex.im);

    // geht nur, weil die Datensätze gleich abgelegt sind!
    printf("Komplexe Zahl2: Realteil: %.2f, Imaginaerteil: %.2f\n", b.value[0], b.value[1]);

    return 0;

}

