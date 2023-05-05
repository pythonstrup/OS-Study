#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
	if (rmdir("park") == -1) {
		perror("park");
		exit(1);
	}
}

