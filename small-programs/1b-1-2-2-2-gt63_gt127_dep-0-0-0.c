#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	unsigned char c = atoi(argv[1]);
	
	if (c > 63) {
		printf("if-1-win ");
		unsigned char x = (c / 3) * 2;
		if (c > 127)
			printf("if-2-win\n");
		else
			printf("if-2-lose\n");
	} else {
		printf("if-1-lose\n");
	}
	return 0;
}
