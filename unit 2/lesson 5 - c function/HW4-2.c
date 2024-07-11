#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//
int get_factorial(int x){

    if(x>1){
return x*get_factorial(x-1);
    }
}

int main()
{
    int x=6;
  printf("\n\nthe factorial is : %d",get_factorial(x));

    return 0;
}
