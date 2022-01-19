#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char* argv[])
{
  if (argc < 2) return 1;
  int n, i,  c, a = 1;
 
//  printf("Enter the number of rows of Floyd's triangle to print\n");
//  scanf("%d", &n);
  srand(0);
  n = atoi(argv[1]);//rand() % 50;
 
  for (i = 1; i <= n; i++)
  {
    for (c = 1; c <= i; c++)
    {
      printf("%d ",a);
      a++;
    }
    printf("\n");
  }
 
  return 0;
}
