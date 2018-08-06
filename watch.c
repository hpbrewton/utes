#include <unistd.h>

int
main (int argc, char *argv[]) {
	char *filePath = argv[1];
	char *command[] = &argv[2];
	struct stat fileStat;
	if (stat(&filePath, &fileStat))
		exit(1);
	struct timespec previousTime = fileStat.st_mtimespec;

	for (;;) {
		sleep(1);
		if (stat(&filePath, &fileStat)) 
			exit(1);
		if (fileStat.st_mtimespec->tv_sec > previousTime->tv_sec) {
			previousTime = fileStat.st_mtimespec;
			if (fork()) {
				execv("
			}
		}
	}
}
