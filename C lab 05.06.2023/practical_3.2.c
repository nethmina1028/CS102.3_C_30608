include <stdio.h>
#include <stdlib.h>

int main()
{
    int no1,no2,no3,max,min;

    printf("enter the 3 integers");
    scanf("%d %d %d",&no1,&no2,&no3);

     max=no1;

     if(no1<no2)
     max=no2;

     if(no2<no3)
     max=no3;

   printf("max:%d",max);

        min=no3;

     if (no2<no3)
        min=no2;

     if(no1<no2);
        min=no1;

     printf("min:%d",min);

}
