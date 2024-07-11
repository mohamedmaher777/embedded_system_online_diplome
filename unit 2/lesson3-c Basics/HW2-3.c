#include <stdio.h>
#include <stdlib.h>

int main()
{
     float a[3];
   for(int i=0;i<3;i++){
    int z;
    z=i+1;
    printf("enter number %d : ",z);
    scanf("%f",&a[i]);
    //fflush(stdin);
    printf("\n");
   }
   if(a[0]>a[1]){
    if(a[0]>a[2]){
        printf("\nthe largest one is : %f",a[0]);

    }else{
    printf("\nthe largest one is : %f",a[2]);}
   }
   if(a[0]<a[1]){
    if(a[1]<a[2]){
        printf("\nthe largest one is : %f",a[2]);
    }
    else {
        printf("\nthe largest one is : %f",a[1]);
    }
   }
    return 0;
}
