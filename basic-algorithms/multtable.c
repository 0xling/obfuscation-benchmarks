/* C program to find multiplication table up to 10. */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    if (argc < 2) return 1;
    int n, i;
//    printf("Enter an integer to find multiplication table: ");
//    scanf("%d",&n);
    srand(0);
    n = atoi(argv[1]);//4;//rand() % 50;

    for(i=1;i<=10;++i)
    {
        printf("%d * %d = %d\n", n, i, n*i);
    }
    return 0;
}
