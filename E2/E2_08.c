#include <stdio.h>

double mean(double array[], int length);

int main() {
    double x[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    double value = mean(x, 10);
    printf("Der Mittelwert ist: %.2f\n", value);
    return 0;
}

double mean(double array[], int length) {
    double sum;
    int i;
    for (i=0; i<length; i++) {
        sum += array[i];
    }
    return sum/length;
}

