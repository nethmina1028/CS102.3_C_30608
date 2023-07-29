#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[15];
    int salary,newsalary,inc ;


     printf("enter the name:");
     scanf("%s",&name);

    printf("enter the salary:");
    scanf("%d",&salary);

    if(5000<=salary<10000)
      inc=(salary/100)*10;

      else

   if(salary<5000)
   inc=(salary/100)*5;

      else

   if(salary<10000)
   inc=(salary/100)*15;

   newsalary=salary+inc;

   printf("name:%s\n",name);
   printf("newsalary:%d",newsalary);
}
