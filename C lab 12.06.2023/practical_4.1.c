#include<stdio.h>
 int main()
 {
 int no1,no2;
 char operator;

 printf("please enter operator (+,-,*,/)");
 scanf("%c",&operator);

 printf("\n please enter the values for two operands:no1 and no2:");
 scanf("%f%f,&no1,&no2");


 switch(operator)
 {
     case'+':
     printf("the addition of 2 number are %c",no1+no2);
     break;

      case'-':
     printf("the substraction of 2 number are %c",no1-no2);
     break;


      case'/':
     printf("the division of 2 number are %c",no1/no2);

     break;

      case'*':
     printf("the multiplication of 2 number are %c",no1*no2);
     break;
      default:
        printf("\n you have entered an invalid operator");
 }


}

