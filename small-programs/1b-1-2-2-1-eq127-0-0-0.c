#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	unsigned char c = atoi(argv[1]);
	
	if (argc > 1) {
		if (c == 127)
			printf("win\n");
		else
			printf("lose\n");
	} else {
		printf("Usage: program-name character\n");
	}
	return 0;
}
