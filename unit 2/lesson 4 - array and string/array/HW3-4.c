#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()
{
int q,w,e,r,m=1;
printf("\n\nEnter the no of element : ");
scanf("%d",&q);
int a[q];

for (int i=0;i<q;i++){
    printf("\nelement number %d is : ",m);
    scanf("%d",&a[i]);
    m++;
}

   printf("\n\nEnter the element to be searched : ");
   scanf("%d",&e);
   for (int i=0;i<q;i++){
    if(e==a[i]){
            printf("\nThe number found at the location : %d",(i+1));
    break;

    }
}




    return 0;
}
