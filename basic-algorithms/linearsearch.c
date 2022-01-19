#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]){
    if (argc < 12) return 1;
    int a[10],i,m,c=0;

//    printf("Enter the size of an array: ");
//    scanf("%d",&n);

//    printf("Enter the elements of the array: ");
//    for(i=0;i<=n-1;i++){
//         scanf("%d",&a[i]);
//    }

//    printf("Enter the number to be search: ");
//    scanf("%d",&m);
    for(i=1;i<argc-1;i++)
        a[i-1] = atoi(argv[i]);
    m = atoi(argv[argc-1]);

    for(i=0;i<=argc-2;i++){
         if(a[i]==m){
             c=1;
             break;
         }
    }
    if(c==0)
         printf("The number is not in the list\n");
    else
         printf("The number is found\n");

    return 0;
}
