/*
  PROBLEM:
  PROGRAMM STUERZT AB;
  AUSSERDEM ERZEUGT ES NICHT DIE GEWUENSCHTE AUSGABE
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define			_CRT_SECURE_NO_WARNINGS
#define         MAX_CHAR        50
#define         MAX_LINES       3

int main(void)
{
	int  i;
	char temp[MAX_CHAR], *cpt[MAX_LINES];


	/*
			cpt ist ein Array der Laenge MAX_LINES; jedes Element von cpt ist
			vom Typ char*, also ein String.
			Es sollen nun einzelne Strings dynamisch in den Komponenten von cpt
			abgelegt werden. Dabei haben sich wohl Fehler eingeschlichen...
	*/

	strcpy(temp, "Hier steht String Nr.1");
	cpt[0] = (char *)calloc((strlen(temp) + 1), sizeof(char));
	strcpy(cpt[0], temp);

	strcpy(temp, "Hier steht String Nr.2");
	cpt[1] = (char *)calloc((strlen(temp) + 1), sizeof(char));
	strcpy(cpt[1], temp);

	strcpy(temp, "Hier steht String Nr.3");
	cpt[2] = (char *)malloc((strlen(temp) + 1) * sizeof(char));
	strcpy(cpt[2], temp);

	/*
			Jetzt sind die drei Strings gespeichert.
			Test anhand einer Ausgabe;
	*/


	for (i = 0; i < 3; i++)
		printf("%s\n", cpt[i]);
	printf("\n");
	/*
			Jetzt soll der dritte String in allen Komponenten
			cpt[i], i=0,1,2 erscheinen
			(in temp ist noch der letzte String gespeichert...)
	*/
	cpt[0] = temp;
	cpt[1] = temp;

	/*
			Test durch Ausgabe:
	*/

	for (i = 0; i < 3; i++)
		printf("%s\n", cpt[i]);
	printf("\n");

	/*
			Jetzt wird der neue String in temp kopiert und
		cpt[i], i=0,1,2, ausgedruckt.
		Wodurch erklaert sich die Ausgabe?
	*/
	strcpy(temp, "Hier steht ein String fuer temp");

	for (i = 0; i < 3; i++)
		printf("%s\n", cpt[i]);
	printf("temp = %s\n", temp);
	printf("\n");

	/*
			Jetzt soll in cpt[2] ein neuer String eingelesen werden,
			cpt[0] und cpt[1] sollen unveraendert bleiben.

			WARUM FUNKTIONIERT DAS NICHT ???
	*/
	for (i = 0; i < 3; i++)
		free(cpt[i]);

	strcpy(cpt[2], "Hier steht ein brandneuer String");

	/*
			Gebe nochmals alle drei Strings aus
	*/
	for (i = 0; i < 3; i++)
		printf("%s\n", cpt[i]);

	return 0;
}
