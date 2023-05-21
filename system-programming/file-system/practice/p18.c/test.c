#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

int main() {

	struct stat statbuf;

	stat("linux.txt", &statbuf);
	printf("Before Link: %d\n", (int) statbuf.st_nlink);

	
}
