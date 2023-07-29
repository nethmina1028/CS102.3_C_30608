#include <stdio.h>
#include <stdlib.h>


int main() {

int m;

printf("Enter the month number ");
scanf("%d",&m);


switch (m) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("month %d has 31 days",m);
        break;
    case 2:
        printf("month %d has 28 days",m);
    default:
        printf("month %d has 30 days",m);

   }
}
