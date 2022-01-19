#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
  if(argc < 2) return 1;
  int n, n1, rem, num=0;
//  printf("Enter a positive  integer: ");
//  scanf("%d", &n);
  //n = 33;//rand();
  n = atoi(argv[1]);
  n1=n;
  while(n1!=0)
  {
      rem=n1%10;
      num+=rem*rem*rem;
      n1/=10;
  }
  if(num==n)
    printf("is an Armstrong number.");
  else
    printf("is not an Armstrong number.");
}
