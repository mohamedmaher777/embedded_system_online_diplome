#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>











int main()
{
int m;
m=29;
int* ab = &m;
printf("\nAddress of m : 0x%p",&m);
printf("\nValue of m : %d",m);
printf("\nAddress of pointer : 0x%p",ab);
printf("\nContent of pointer ab : %d",*ab);
m=34;
printf("\nAddress of pointer : 0x%p",ab);
printf("\nContent of pointer ab : %d",*ab);
*ab=7;
printf("\nAddress of m : 0x%p",&m);
printf("\nValue of m : %d",m);

    return 0;
}
