#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,sum=0,result;
    printf("Enter Number");
    scanf("%d",&num);

    while(num!=0)
    {
        result=num%10;
        sum+=result;
        num/=10;
    }
    printf("sum=%d",sum);
}

