#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

int main() {
	struct stat statbuf;

	stat("linux.txt", &statbuf);
	printf("Before Link Count = %d\n", (int) statbuf.st_nlink);

	link("linux.txt", "linux1.ln");
	link("linux.txt", "linux2.ln");
	link("linux.txt", "linux3.ln");
	link("linux.txt", "linux4.ln");
	link("linux.txt", "linux6.ln");
	link("linux.txt", "linux5.ln");
	symlink("linux.txt", "linux.sym");

	stat("linux.txt", &statbuf);
	printf("After Link Count = %d\n", (int) statbuf.st_nlink);
}

