#include <time.h>
#include <stdlib.h>
#include <stdio.h>

clock_t startm, stopm;

#define BEGIN if ( (startm = clock()) == -1) \
{ \
printf("clock returned error."); \
exit(1); \
}

#define STOP if ( (stopm = clock()) == -1) \
{printf("clock returned error."); \
exit(1); \
}

#define SHOWTIME printf( "%6.3f seconds elapsed.", ((double)stopm-startm)/CLOCKS_PER_SEC);

int main() {
	BEGIN;

	printf("Working.");
	for (int i = 0; i < 1000000; i++) {
	printf(".");
	}

	STOP;
	SHOWTIME;
}
