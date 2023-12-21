
#include <stdio.h>

double mwstsatz = 0.08;

double calcMwst(double value) {
    return value * mwstsatz;
}

int main() {
    double wert = 40;
    double mwst = calcMwst(wert);
    printf("Die Mehrwertsteuer von %.2f ist %.2f\n", wert, mwst);
    return 0;
}

