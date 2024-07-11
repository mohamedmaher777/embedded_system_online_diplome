#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//65-90



int main()
{
    char a[100];

    printf("\n\nEnter the string : ");
    scanf("%[^\n]",&a);
    char* ptr = &a;
    int x;
    x=strlen(a);
    ptr=ptr+x;
    printf("\nthe output is : ");
    for(int i = 0;i<=x;i++){
        printf("%c",*ptr);
        ptr--;

    }









    return 0;
}
