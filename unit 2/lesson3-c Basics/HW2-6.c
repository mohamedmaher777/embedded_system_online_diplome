#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,z=0;
printf("\n\nEnter your number : ");
scanf("%d",&x);
for(int y=1;y<=x;y++){
    z+=y;
}
printf("\nthe sum is : %d",z);
    return 0;
}
