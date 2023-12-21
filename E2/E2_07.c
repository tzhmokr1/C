#include <stdio.h>


int main() {
    int i;
    int x[] = {43, 27, 13};
    for (i=0; i<3; i++) {
        printf("Zahl%d: %d\n", i+1, x[i]);
    }
    return 0;
}
