#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct maher{
char Exmployee_Name[100];
int Employee_ID;
};

int main()
{
struct maher arr1={"ahmed",1005},arr2={"mohamed",1020};
struct maher *ptr[2]={&arr1,&arr2};
printf("\nthe student data is : ");
printf("\nExmployee Name is : %s",ptr[1]->Exmployee_Name);
printf("\nEmployee ID is : %d",ptr[1]->Employee_ID);
    return 0;
}
