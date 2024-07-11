#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{

int roll_number;
char name[50];
float mark;

};






int main()
{

  struct student data[4];

  printf("\n\nEnter the information of students : ");
  for(int i = 0;i<4;i++){
    printf("\nfor roll number : ");
    scanf("%d",&data[i].roll_number);
    printf("\nfor the name : ");
    scanf("%s",&data[i].name);
    printf("\nfor the marks : ");
    scanf("%f",&data[i].mark);
  }
  printf("\n\nDisplaying the information : ");

  for(int i = 0;i<4;i++){
    printf("\nfor roll number : %d",data[i].roll_number);
    printf("\nfor the name : %s",data[i].name);
    printf("\nfor the marks : %.1f",data[1].mark);
    printf("\n\n");
  }





    return 0;
}
