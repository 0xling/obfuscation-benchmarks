#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    if(argc < 2) return 1;
    int i,j,rows;
//    printf("Enter the number of rows: ");
//    scanf("%d",&rows);
    srand(0);
    rows = atoi(argv[1]);//6;//rand() % 10;

    for(i=1;i<=rows;++i)
    {
        for(j=1;j<=i;++j)
        {
           printf("* ");
        }
        printf("\n");
    }
    return 0;
}
