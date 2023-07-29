#include<stdio.h>

int main()
{
    float rad,v,cir,area,pi= 3.14159;
    char t;
printf("enter the radius of the circle? ");
scanf("%f",&rad);
printf("select which of these options you want to know \n1.The circumference of the circle type 'c'\n2.The Area of the circle type 'a'\n3. The volume of the circle type 'v'\n ");
scanf(" %c",&t);


if(t=='c')
    printf("The circumference of the circle is %.2f", 2*pi*rad);
else if(t=='a')
    printf("The Area of the circle is %.2f", pi*rad*rad);
else if(t=='v')
    printf("The Volume of the circle is %.2f", pi*rad*rad*rad);
else
    printf("Invalid option");


}

