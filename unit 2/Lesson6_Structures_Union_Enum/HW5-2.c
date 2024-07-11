#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct distance{
float feet;
float inch;

}x,y,sum;


int main()
{
printf("\n\nEnter the first distance : ");
printf("\nEnter the first feet : ");
scanf("%f",&x.feet);
printf("\nEnter the first inch : ");
scanf("%f",&x.inch);
printf("\n\nEnter the second distance : ");
printf("\nEnter the second feet : ");
scanf("%f",&y.feet);
printf("\nEnter the second inch : ");
scanf("%f",&y.inch);
printf("\n");
sum.feet = x.feet +y.feet;
sum.inch = x.inch + y.inch;
if(sum.inch>12.0){
    sum.inch=sum.inch -12.0;
    ++sum.feet;
}
printf("\n\n the sum of distance = %0.2f' - %.2f '",sum.feet,sum.inch);




    return 0;
}
