#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char* argv[]) {
  if (argc < 2) return 1;
  int x = atoi(argv[1]);
  int c, n;
  srand(0);

  printf("%d random numbers in [1,100]\n", x);
 
  for (c = 1; c <= x; c++) {
    n = rand() % 100 + 1;
    printf("%d\n", n);
  }
 
  return 0;
}
