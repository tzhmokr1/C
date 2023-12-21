#include <stdio.h>

int scanYear(char * buffer, int * pYear);

void printOk(int i);
void printFail(char * buffer);

int main() {

   char * test1 = "2050";
   char * test2 = "2101";
   char * test3 = "aaaa";

   int year1, year2, year3;

   // Test 1
   if ( scanYear(test1, &year1) ) {
        printFail(test1);
   }
   else {
        printOk(year1);
   }


   // Test 2
   if ( scanYear(test2, &year2) ) {
        printFail(test2);
   }
   else {
        printOk(year2);
   }

   // Test 3
   if ( scanYear(test3, &year3) ) {
           printFail(test3);
      }
      else {
           printOk(year3);
   }

    return 0;

}

void printOk(int year) {
    printf("[OK]\tDie konvertierte Jahreszahl: %d\n", year);
}

void printFail(char * year) {
   printf("[FAIL]\tDer String ist ungueltig: %s\n", year);
}

int scanYear(char * buffer, int * pYear) {
    sscanf(buffer, "%d",  pYear);
    if ( *pYear > 2100) return 1;
    if ( *pYear < 1900) return 1;
    return 0;
}
