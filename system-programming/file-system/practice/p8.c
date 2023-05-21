#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	int kind;

	char *filename = argv[1];
	printf("filename: %s\n", filename);

	struct stat statbuf;
	int result = stat(filename, &statbuf);
	

	if (result == -1){
		perror(filename);
		exit(1);
	}
	printf("File Mode = %d\n", (unsigned int) statbuf.st_mode);
	printf("File Inode = %d\n", (int) statbuf.st_ino);
	printf("File UID = %d\n", (int) statbuf.st_uid);
	kind = statbuf.st_mode & S_IFMT;
	
	printf("File Tyep = ");
	switch(kind) {
		case S_IFLNK:
			printf("%s is Sysbolic Link\n", filename);
			break;
		case S_IFDIR:
			printf("%s is Directory\n", filename);
			break;
		case S_IFREG:
			printf("%s is Regular file\n", filename);
			break;
	}
}

