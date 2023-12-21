#include <stdio.h>

/**
    Einlesen einer Benutzereingabezeile:
    funktioniert nicht richtig, da scanf() bei einem Leerzeichen
    abbbricht. Bei einem Satz wird nur das erste Wort ausgegeben.
    Es hilft auch nicht, den Satz mit doppelten Hochkommas
    z.B. "Ein toller Satz." einzugeben.

    Für eine Lösung müssten in einer Schleife die einzelnen Worte
    mit strcat() wiederum zu einem Satz zusammengefügt werden.

 **/

int main() {
    char text[80];
    scanf("%s", text);
    printf("%s", text);
    return 0;
}


