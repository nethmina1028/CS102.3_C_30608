#include <stdio.h>
int main()
{
    int marks[10];
    int i,total=0;
    float average;

    printf("Enter the 10 marks\n");

    for (i=0;i<10;i++)
    {
        scanf("%d",&marks[i]);
        total+=marks[i];
    }
    average=total/10.0;

    print("Total marks %d\n",total);
    printf("Average marks %.2f\n",average);

    if (average<50)
    {
        printf("Fail\n");
    }
    else
    {
        printf("Pass\n");
    }

}





