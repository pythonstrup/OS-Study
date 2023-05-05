#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

extern int errno;

int main() {
	if (access("test.txt", F_OK) == -1) {
		printf("errno=%d\n", errno);
		printf("error message=%s\n", strerror(errno));
	}
}
