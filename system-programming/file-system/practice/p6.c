#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;

	char *filename = argv[1];

	struct stat statbuf;
	int result = stat(filename, &statbuf);
	

	if (result == -1){
		perror(filename);
		exit(1);
	}
	printf("File Size = %d\n", (int) statbuf.st_size);
}
