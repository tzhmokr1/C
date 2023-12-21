/**
    Das Programm stellt eine Variable und
    eine Funktion zur Verf�gung, die aus einem
    anderen Programm mit extern eigebunden werden k�nnen.

    Die Variable ABTEILUNG und die Funktion power()
    sind mit static vor extern-Zugriffen gesch�tzt.

**/

char * HSR = "Hochschule fuer Technik Rapperswil";

// Gesch�tzt, darf nicht mit extern eingebunden werden
static char * ABTEILUNG = "Abteilung Informatik";

// liefert den Kehrwert einer Zahl
double inverse(double bli) {
    return 1/bli;
}

// Gesch�tzt, darf nicht mit extern eingebunden werden
static double power(double wert) {
    return wert * wert;
}

