#include <stdio.h>
#include <stdlib.h>

int main()
{

    char a[]={'i','a','e','u','0'};
    char b;
    int f=0;

    while(f<2){
    printf("Enter your char : ");
    scanf("%c",&b);
    fflush(stdin);
    //getchar()
    int z=0;
    for( int i=0;i<5;i++){
       if(b==a[i]){
        printf("your char is vowel\n");
        f++;
        break;
       } else {
       z++;
       continue;
       }
    }
    if(z==5){
        printf("your char in consonant\n");
    f++;
    }
    }

    return 0;
}
