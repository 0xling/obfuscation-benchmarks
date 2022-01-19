#include<stdio.h>
#include<stdlib.h>

int fib(int n) {
   int a = 1;
   int b = 1;
   int i;
   for (i = 3; i <= n; i++) {
      int c = a + b;
      a = b;
      b = c;
   };
   return b;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 1;
//  if (argc != 2) {
//     printf("Give one argument!\n");
//     abort();
//  };
//  long n = strtol(argv[1],NULL,10);
  srand(0);
  int n = atoi(argv[1]);//4;//rand() % 10;
  int f = fib(n);
  printf("fib(%i)=%i\n",n,f);
}
