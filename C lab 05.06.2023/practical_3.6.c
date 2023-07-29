
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char uppercase[]={'A', 'B', 'C'};
    char lowercase[]={'a', 'b', 'c'};
    char digits[]={'0', '1', '2'};
    char symbols[]={'$', '*', '+', '/', ' '};
    printf("Uppercase letters\n");
    for (int i=0;i<3;i++)
    {
        printf("%c %d\n",uppercase[i],(int)uppercase[i]);
    }
    printf("\nLowercase letters\n");
    for (int i=0;i<3;i++)
    {
        printf("%c %d\n",lowercase[i],(int)lowercase[i]);
    }
    printf("\nDigits\n");
    for (int i=0;i<3;i++)
    {
        printf("%c %d\n",digits[i],(int)digits[i]);
    }
    printf("\nSymbols\n");
    for (int i=0;i<5;i++)
    {
        printf("%c %d\n",symbols[i],(int)symbols[i]);
    }
