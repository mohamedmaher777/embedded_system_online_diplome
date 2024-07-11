#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()
{

    printf("\n\nEnter the number of rows and columns :");
    int z,f;
    printf("\nEnter the number of rows : ");
    scanf("%d",&z);
    printf("\nEnter the number of columns : ");
    scanf("%d",&f);
    int a[z][f];
    printf("\n\nEnter the element of the matrix : ");
    int g=1;
    for(int i=0;i<z;i++){
            int gg=1;
        for(int j=0;j<f;j++){
           printf("\nEnter the element a%d%d : ",gg,g) ;
           scanf("%d",&a[i][j]);
           g++;
        }
    gg++;
    }
    printf("\n\nThe matrix you entered is : \n");
    for(int i=0;i<z;i++){
        printf("\n");
        for(int j=0;j<f;j++){
           printf("%d",a[i][j]) ;
           printf("\t");
        }
    }
    printf("\n\nThe transpose is : \n");
    for(int i=0;i<z;i++){
        printf("\n");
        for(int j=0;j<f;j++){
           printf("%d",a[j][i]) ;
           printf("\t");
        }
    }


    return 0;
}
