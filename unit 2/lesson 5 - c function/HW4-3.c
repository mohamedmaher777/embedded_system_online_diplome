#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void reverse (){
char a;
scanf("%c",&a);
if (a != '\n'){
    reverse();
    printf("%c",a);
}
}






int main()
{

printf("\n\nEnter your sentence : ");
reverse();




    return 0;
}
