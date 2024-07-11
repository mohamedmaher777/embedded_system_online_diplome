#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
while(1){
    printf("\n\nEnter your number : ");
    scanf("%d",&x);
    fflush(stdin);
    if(x>0){
            int z=1;
            int f=x;
        for(int i=0;i<x;i++){
            z*=f;
            f--;
        }
        printf("\nyour factorial = %d",z);
    }else if (x<0){
    printf("\nError!!! factorial of negative number doesn't exist");
    }
    else{
        printf("\nfactorial zero is one");
        printf("\nfactorial = 1 ");
    }


}
    return 0;
}
