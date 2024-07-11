#include <stdio.h>
#include <stdlib.h>

int main()
{
   while(1){
        char a;
        float x,y,z;
    printf("\n\nWelcome to our calculator");

    printf("\nEnter operator either + or - or * or / : ");
    scanf("%c",&a);
    //fflush(stdin);
    getchar();
    //fflush(stdin);
    printf("\nEnter two operand : ");
    printf("\nfirst : ");
    scanf("%f",&x);
    fflush(stdin);
    printf("\nsecond : ");
    scanf("%f",&y);
    fflush(stdin);
    if(a=='+'){
            z=x+y;
            printf("\nthe sum is : %f",z);
    }
    else if (a=='-'){
        z=x-y;
        printf("\nthe subtract is : %f",z);
    }
    else if (a=='*'){
        z=x*y;
        printf("\nthe product is : %f",z);
    }
    else if(a=='/'){
        if(y==0){
           printf("\nthis operation cannot be happen due two y = 0");
        }else{
        z=x/y;
        printf("\nthe devision is : %f",z);
        }
    }
    else {
        printf("\nplease enter thr right operation : ");
        continue;
    }

}

    return 0;
}
