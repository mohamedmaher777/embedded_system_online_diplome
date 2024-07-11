#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//65-90



int main()
{
    int b=65;
    printf("\n\nThe alphapet is : \n");

for(int i=0;i<=25;i++){
    int* ptr=&b;
    printf("%c\t",*ptr);
    *ptr+=1;

}




    return 0;
}
