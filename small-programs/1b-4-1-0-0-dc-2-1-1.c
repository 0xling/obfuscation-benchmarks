#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	int i;
	int sum = 0;
	
	for (i = 0; i < argc; i++) {
		sum += i; 
	}
	
	for (i = 1; i <= atoi(argv[1]); i++) {
		sum += sum; 
	}
	
	printf("Sum is: %d\n", sum);
	
	return 0;
}
