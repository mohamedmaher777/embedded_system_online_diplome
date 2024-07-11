#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
while (1){
    printf("\n\nEnter your char : ");
    scanf("%c",&x);
    fflush(stdin);
    if((65<=x && x<=90)||(97<=x && x<=122)){
        printf("\n%c is alphabet",x);
    }else{
    printf("\n%c is not alphabet",x);
    }


}
    return 0;
}
