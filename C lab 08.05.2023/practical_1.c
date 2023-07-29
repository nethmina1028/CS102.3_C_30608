#include <stdio.h>
int main ()
{

    //question 1

printf(" nethmina \n st' joseph college \n");

   //question 2

{
printf("*\n ** \n *** \n **** \n *****");
}
   //question3

       int no1;
    float pri;
    double tim;
    char name[20];

    printf("Enter the name ");
   scanf("%d \n",&name);

   printf("Enter the number ");
   scanf("%s \n",&no1);

   printf("Enter the price ");
   scanf("%f \n",&pri);

   printf("Enter the time ");
   scanf("%g \n",&tim);

  printf("Name is %d \n",name);
  printf("number is %s \n",no1);
  printf("price is %f\n",pri);
  printf("time is %g\n",tim);


  //question 4

  int no11,no22,tot;

    printf("Enter the numbers ");
   scanf("%d %d",&no11,&no22);

   tot= no11+no22;

 printf("total is %d \n ",tot);


 //question5

 float no1,no2,avg;

    printf("Enter the numbers ");
   scanf("%f %f",&no1,&no2);

   avg = (no1+no2)/2;

 printf("Average is %2f \n ",avg);

 //question6
   char name[20];
   int year,pro;


    printf("Enter the name ");
   scanf("%s",&name);

   printf("Enter the year ");
   scanf("%d",&year);

    pro=2023-year;

       printf("name is :%s \n",name);
       printf("year is :%d ",pro);

}


