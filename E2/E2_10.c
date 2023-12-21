#include <stdio.h>
#include <string.h>

// strlen() liefert Anzahl Zeichen ohne '\0'

int main() {
    char * name = "Ihr Name"; // 8 Zeichen
    printf("Name: %s, Anzahl Zeichen: %d\n", name, strlen(name));
    return 0;
}


