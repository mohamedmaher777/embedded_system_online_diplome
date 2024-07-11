#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{

   char a[50],b[50];
   printf("\n\nEnter the string : ");
   scanf("%[^\n]",&a);
   fflush(stdin);
   int g;
   g=strlen(a)-1;
   for(int i=0;i<strlen(a);i++){
    if((g-i)>=0){
    b[i]=a[g-i];
    }
   }
   printf("\n\nthe reverse string is : ");
   for(int i =0;i<strlen(a);i++){
    printf("%c",b[i]);
   }
   printf("\n\n\a");




    return 0;
}
