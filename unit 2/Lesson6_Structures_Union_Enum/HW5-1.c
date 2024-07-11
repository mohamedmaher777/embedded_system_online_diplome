#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{

char name[50];
int roll_number;
float marks;


};


int main()
{

  struct student data;
  printf("\n\nEnter the information of student ");
  printf("\nEnter the name : ");
  scanf("%s",&data.name);
  printf("\nEnter the roll number : ");
  scanf("%d",&data.roll_number);
  printf("\nEnter the marks : ");
  scanf("%f",&data.marks);

  printf("\n\ndisplaying the information : ");
  printf("\nname : %s\nroll : %d\nmarks : %0.2f",data.name,data.roll_number,data.marks);



    return 0;
}
