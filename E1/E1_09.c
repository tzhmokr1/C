
#include <stdio.h>

double radius = 5.0;
double PI = 3.14156;

int main() {
    double d = 2.0 * radius * PI;
    printf("Kreisberechnung\n");
    printf("Radius: %.2f\tUmfang: %.2f\n", radius, d);
    return 0;
}
