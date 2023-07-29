//Q4.
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

//Q5.
#include <stdio.h>

int main() {
    int num,r_Number=0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    do {
        remainder = num % 10;
        r_Number = r_Number * 10 + remainder;
        num /= 10;
    } while (num != 0);

    printf("Reversed number: %d\n", r_Number);
}

//Q6.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base,exponent,result=1;

    printf("Enter the base");
    scanf("%d",&base);

    printf("Enter the exponent");
    scanf("%d",&exponent);
    if(exponent>=0)
    {
        for(int i=0;i<exponent;i++)
        {
            result*=base;
        }
        else
            printf("Exponent should be a non-negative integer\n");
    }
    printf("Result %d\n",result);
}

//Q7.
#include <stdlib.h>

int main()
{
   int n=10;
   int first=0,second=1,next;

   printf("Fibonacci Sequence");

   for(int i=0;i<n;i++);
   {
       if(i<=1)
       {
           next=i;
       }
       else
       {
           next=first+second;
           first=second;
           second=next;
       }
       printf("%d",next);
   }
   printf("\n");

}

//Q9.
#include <stdio.h>
int main()
{
   char letter;
   printf("ASCII values for letters A to Z:\n");
   for (letter = 'A'; letter <= 'Z'; letter++)
    {
        printf("%c: %d\n", letter, letter);
    }
   return 0;
}



//Q10.
#include <stdio.h>

int main()
{
    int rows=5;
    for (int i=1; i<=rows;i++)
    {
        for (int j=1;j<=i;j++)
         {
             printf("*");
         }
         printf("\n");
    }
}

//Q12.

#include <stdio.h>

void printFactors(int number)
{
    printf("Factors of %d",number);
    for (int i=1;i<=number;i++)
        {
        if (number%i==0)
        {
            printf("%d",i);
        }
        }
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);
    printFactors(num);
}
