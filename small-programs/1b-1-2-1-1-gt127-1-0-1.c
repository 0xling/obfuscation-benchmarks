#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	int i;
	int sum = 0;
	
	for (i = 0; i < atoi(argv[1]); i++) {
		if (atoi(argv[1]) > 127)
			sum += i;
		else
			sum *= i; 
	}
	
	printf("Sum is: %d\n", sum);
	
	return 0;
}
