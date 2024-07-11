#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct complex{

float real_number;
float imagine_number;

};

struct complex add(struct complex x,struct complex y){
struct complex z;
z.real_number = x.real_number + y.imagine_number;
z.imagine_number = x.imagine_number + y.imagine_number;
printf("\n\nthe sum = %0.1f+%0.1fi",z.real_number,z.imagine_number);

};


int main()
{

  struct complex x,y;
  printf("\n\nEnter the first complex number : ");
  printf("\nEnter the real number : ");
  scanf("%f",&x.real_number);
  printf("\nEnter the imagine number : ");
  scanf("%f",&x.imagine_number);
  printf("\n\nEnter the second complex number : ");
  printf("\nEnter the real number : ");
  scanf("%f",&y.real_number);
  printf("\nEnter the imagine number : ");
  scanf("%f",&y.imagine_number);
  add(x,y);




    return 0;
}
