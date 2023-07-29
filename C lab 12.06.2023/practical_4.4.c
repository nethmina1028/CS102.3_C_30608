#include <stdio.h>
#include <stdlib.h>

int main()
{
    char let;

    printf("enter the character");
    scanf("%c",&let);

switch (let)
{
    case'A':
    case'E':
    case'I':
    case'O':
    case'U':
    case'a':
    case'e':
    case'i':
    case'o':
    case'u':
    printf("%c is a vowel",let);break;

            default:
        printf("%c is not a vowel letter",let);
}
}
