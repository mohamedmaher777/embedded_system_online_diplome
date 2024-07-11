#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int power(int a,int b){

if (b>1){
    return a*power(a,--b);
}

}








int main()
{
    int x,y;
printf("\n\nEnter the base number : ");
scanf("%d",&x);
printf("\nEnter the power number : ");
scanf("%d",&y);
    printf("\nthe value is : %d",power(x,y));





    return 0;
}
