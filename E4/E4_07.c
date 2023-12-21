/**
    Implementiert das Makro print
**/
#include <stdio.h>


#define print(text) printf("%s\n", text)

int main() {
    print("HSR");
    print("Das geht auch mit einem langen Text.");
    return 0;
}

