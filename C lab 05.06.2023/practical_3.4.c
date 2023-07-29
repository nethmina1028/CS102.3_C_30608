#include <stdio.h>
#include <stdlib.h>

int main()
{
   int rad,diam;
   float cir,area;

   printf("enter the radius:");
   scanf("%d",&rad);

   diam=rad*2;
   cir=2*3.14159*rad;
   area=3.14159*rad*rad;
   printf("Diameter is %d\n",diam);
   printf("circumference is %f.\n",cir);
   printf("Area is %f.\n",area);
}
