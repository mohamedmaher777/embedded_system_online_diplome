#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{

   char a[50];
   printf("\n\nEnter the string : ");
   scanf("%[^\n]",&a);
   fflush(stdin);
   int i=0;
    while (a[i]!=0){
        i++;
    }
    printf("\n\nsize of string is : %d",i);
    printf("\n\nby using strl : %d",strlen(a));




    return 0;
}
