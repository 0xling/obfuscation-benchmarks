#include <stdio.h>
#include <stdlib.h>

char *rand_string(char*,size_t);

int main(int argc, char* argv[]){
   if (argc < 3) return 1;
   int i,count=0;
//   printf("Enter a string: ");
//   gets(c);
   srand(0);
   //rand_string(c, 50);

//   printf("Enter a character to find frequency: ");
//   scanf("%c",&ch);

   char* c = argv[1];
   char ch = argv[2][0];

   for(i=0;c[i]!='\0';++i)
   {
       if(ch==c[i])
           ++count;
   }
   printf("Frequency of %c = %d", ch, count);
   return 0;
}

char *rand_string(char *str, size_t size)
{
    const char charset[] = "abcdefghijklmnopqrstuvwxyz1234567890";
    if (size) {
        --size;
        for (size_t n = 0; n < size; n++) {
            int key = rand() % (int) (sizeof charset - 1);
            str[n] = charset[key];
        }
        str[size] = '\0';
    }
    return str;
}

