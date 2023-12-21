#include <stdio.h>

void convertYear(int year, char * buffer);

int main() {

   int year = 2017;
   char buffer[5];  // 4 + 1 (fuer '\0' Zeichen)

   convertYear(year, buffer);
   printf("Die Jahreszahl als String: %s\n", buffer);

   return 0;

}

void convertYear(int year, char * buffer) {
    sprintf(buffer, "%d", year);
}
