/**
    Das Programm stellt eine Variable und
    eine Funktion zur Verfügung, die aus einem
    anderen Programm mit extern eigebunden werden können.

    Die Variable ABTEILUNG und die Funktion power()
    sind mit static vor extern-Zugriffen geschützt.

**/

char * HSR = "Hochschule fuer Technik Rapperswil";

// Geschützt, darf nicht mit extern eingebunden werden
static char * ABTEILUNG = "Abteilung Informatik";

// liefert den Kehrwert einer Zahl
double inverse(double bli) {
    return 1/bli;
}

// Geschützt, darf nicht mit extern eingebunden werden
static double power(double wert) {
    return wert * wert;
}

