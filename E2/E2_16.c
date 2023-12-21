#include <stdio.h>
#include <string.h>

int main() {

   char * name = "Kolumbus";
   char * vorname = "Christoph";
   char buffer[40];

   buffer[0]='\0';
   strcat(buffer, vorname);
   strcat(buffer, " ");
   strcat(buffer, name);

   printf("Zusammengefuegter String: %s\n", buffer);
   return 0;

}
