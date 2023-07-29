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
