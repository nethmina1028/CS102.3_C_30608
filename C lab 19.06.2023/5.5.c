#include <stdio.h>

int main() {
    int num,r_Number=0, remainder;

    printf("Enter a number: ");
    scanf("%d", &r_Number);

    do {
        remainder = num % 10;
        r_Number = r_Number * 10 + remainder;
        num /= 10;
    } while (num != 0);

    printf("Reversed number: %d\n", r_Number);
}
