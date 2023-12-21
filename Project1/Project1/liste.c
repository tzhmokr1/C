//
// Zombieverhinderung mittels Enkelprozess
// (ohne Fehlerbehandlung)
// 16.12.04/gle
//

#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	pid_t k;
	int s;

	printf("Ich bin Elternprozess mit PID = %d und PPID = %d\n", getpid(), getppid());

	k = fork();
	if (k == 0) {
		printf("Ich bin Kind1prozess mit PID = %d und PPID = %d\n", getpid(), getppid());
		k = fork();
		if (k == 0) {
			printf("Ich bin Kind2prozess (Enkel) mit PID = %d und PPID = %d\n", getpid(), getppid());
			// Hier waere Kinderarbeit
			execl("/bin/date", "date", NULL);  //Warte ein bisschen damit Verwaisung sicher stattgefunden hat
			printf("Ich bin verwaister Kind2prozess mit PID = %d und PPID = %d\n", getpid(), getppid());
			exit(0);
		}
		else {
			// Mein Job ist erledigt
			exit(0);
		}
	}
	else {
		// Warte auf schnelles Ende des Kindprozesses1
		wait(&s);
		exit(0);
	}
}
