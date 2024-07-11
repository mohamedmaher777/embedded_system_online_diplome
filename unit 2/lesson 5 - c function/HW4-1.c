#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//
void get_prime_number(int gg ,int hh){
int zz=hh-gg;
for(int i=0;i<zz;i++) {
        int ss=0,yy=0;
        if(gg>1){
          ss=(gg/2);
          for(int j=2;j<=ss;j++){
            if(((gg%j)==0)){
            yy++;
          }
        }
        if(yy==0){
        printf("%d , ",gg);
    }
        }

        else
        {
            gg++;
                continue;
        }
        gg++;


  }

}

int main()
{
   int gg,hh,zz;
    printf("\n\nEnter your interval ");
    printf("\nstart of interval : ");
    scanf("%d",&gg);
    printf("\nend of interval : ");
    scanf("%d",&hh);
    get_prime_number(gg,hh);


    return 0;
}
