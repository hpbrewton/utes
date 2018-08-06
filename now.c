#include <time.h>
#include <stdio.h>

char *hours[] = {
	"midnight", "one", "two",
	"three", "four", "five",
	"six", "seven", "eight",
	"nine", "ten", "eleven",
};

char *delts[] = {
	"quarter-past ", "half-past ", "quarter-till ", ""
};

int 
main (int argc, char* argv[]) {
	time_t t = time(NULL);
	struct tm time = *localtime(&t);
	
	int hour = time.tm_hour;
	int minc = 3;
	if (time.tm_min < 7) {
		minc = 3;
	} else if (time.tm_min < 22) {
		minc = 0;
	} else if (time.tm_min < 37) {
		minc = 1;
	} else if (time.tm_min < 52) {
		minc = 2;
	}

	if (minc >= 2 && time.tm_min > 30)
		hour ++;
	
	printf("%s%s\n", 
				delts[minc],
				// midnight and noon are both 12, but different hour names	
				hour == 12 ? "noon" : hours[hour%12]
			    );	
}
