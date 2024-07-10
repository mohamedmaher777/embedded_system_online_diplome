#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()
{

    float a[2][2],b[2][2],z[2][2];
    printf("\n\nEnter the element of first matrix : ");
    int g=1;
    for(int i=0;i<2;i++){
        int s=1;
        for(int j=0;j<2;j++){

            printf("\nEnter the element a%d%d : ",g,s);
            scanf("%f",&a[i][j]);
            s++;
        }
        g++;
    }
    printf("\n\nEnter the element of second matrix : ");
    int m=1;
    for(int i=0;i<2;i++){
        int mm=1;
        for(int j=0;j<2;j++){

            printf("\nEnter the element b%d%d : ",m,mm);
            scanf("%f",&b[i][j]);

            mm++;
        }
        m++;
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
          z[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("\n\nthe sum of matrix is : \n%0.1f\t%0.1f\n%0.1f\t%0.1f\n",z[0][0],z[0][1],z[1][0],z[1][1]);




    return 0;
}
