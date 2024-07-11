#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//65-90



int main()
{
    int a[15];

    printf("\n\nEnter the number of element : ");
    int x;
    scanf("%d",&x);
    int* ptr = &a;
    for(int i =0;i<x;i++){
        printf("\nthe element - %d : ",(i+1));
        scanf("%d",&a[i]);
        ptr++;
    }
    for(int i=0;i<x;i++,ptr--){
        printf("\nThe element - %d : %d",(x-i),*(ptr-1));
    }














    return 0;
}
