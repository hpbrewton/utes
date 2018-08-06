#include <time.h>
#include <stdio.h>

int
main (int argc, char *argv[]) 
	time_t t = time(NULL);
	struct tm time = *localtime(&t);

	printf("%.4d-%.2d-%.2d\n", time.tm_year + 1900, time.tm_mon, time.tm_mday);
}
