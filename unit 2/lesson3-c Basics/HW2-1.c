#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    while(1){
        printf("\n\nEnter your number : ");
        scanf("%d",&x);
        if(x%2==0){
            printf("\n%d is even ",x);
        }
        else
            printf("\n%d is odd ",x);


    }
    return 0;
}
