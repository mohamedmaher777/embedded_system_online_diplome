#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()
{
    int b,i=0,g=0;;

    printf("\n\nEnter the count you want to Enter : ");
    scanf("%d",&b);
    float a[b];
    float z=0,zz;
    while(i<b){
        g++;
        printf("\n%d-Enter the number : ",g);
        scanf("%f",&a[i]);
        i++;
    }
    for(int i =0 ;i<b;i++){
       z+=a[i];
    }
    zz=z/b;
    printf("\nThe avrage is : %0.3f",zz);

    return 0;
}
