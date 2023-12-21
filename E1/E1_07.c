
#include <stdio.h>

int main() {
    printf("char:\t\t%d Byte\t%d Bit\n",    sizeof(char),      8*sizeof(char));
    printf("short:\t\t%d Byte\t%d Bit\n",   sizeof(short),     8*sizeof(short));
    printf("int:\t\t%d Byte\t%d Bit\n",     sizeof(int),       8*sizeof(int));
    printf("long:\t\t%d Byte\t%d Bit\n",    sizeof(long),      8*sizeof(long));
    printf("long long:\t%d Byte\t%d Bit\n", sizeof(long long), 8*sizeof(long long));
    return 0;
}
