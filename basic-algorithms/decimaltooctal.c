#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]){
  
  if (argc < 2) return 1;
  long int decimalNumber,remainder,quotient;
  int octalNumber[100],i=1,j;

//  printf("Enter any decimal number: ");
//  scanf("%ld",&decimalNumber);
  decimalNumber = atol(argv[1]);

  quotient = decimalNumber;

  while(quotient!=0){
      octalNumber[i++]= quotient % 8;
      quotient = quotient / 8;
  }

  printf("Equivalent octal value of decimal number %ld: \n",decimalNumber);
  for(j = i -1 ;j> 0;j--)
      printf("%d",octalNumber[j]);

  return 0;
}
