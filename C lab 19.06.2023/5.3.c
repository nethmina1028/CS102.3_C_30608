#include <stdio.h>

int main()
{int no,fact= 1;

 printf("enter a no");
 scanf("%d",&no);
 if (no<0)
    {
        printf("error:factorial of negative no isnt defined");
 }
 else
    {
 for (int i=1;i<=no;i++){fact*=1;
 }
 printf ("factorialof %d is %d,num,fact ");
 }
}
