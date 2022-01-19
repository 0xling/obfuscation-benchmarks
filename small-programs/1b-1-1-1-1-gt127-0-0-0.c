#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	unsigned char c = atoi(argv[1]);
	if (c > 127)
		printf("win\n");
	else
		printf("lose\n");
	
	return 0;
}
