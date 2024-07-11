#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define area(r) r*r*3.14


int main()
{
int x;
printf("\n\nEnter the radius : ");
scanf("%d",&x);
printf("\n\nthe area = %.2f",area(x));




    return 0;
}
