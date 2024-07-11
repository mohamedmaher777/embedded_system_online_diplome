#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
  while(1){
    printf("\n\nEnter your number : ");
    scanf("%f",&x);
    //fflush(stdin);
    if(x>0){
        printf("your number is postive ");
    }else if(x<0){
    printf("your number is negative ");
    }
    else
        printf("your number is zero ");

  }
    return 0;
}
