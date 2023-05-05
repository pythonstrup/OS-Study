#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
	if (mkdir("park", 0755) == -1) {
		perror("park");
		exit(1);
	}
}

