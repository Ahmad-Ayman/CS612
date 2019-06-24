#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point{
int x;
int y;
}p1,p2;
int main()
{
   printf("Enter x1 : ");
   scanf("%d",&p1.x);
   printf("Enter y1 : ");
   scanf("%d",&p1.y);
   printf("Enter x2 : ");
   scanf("%d",&p2.x);
   printf("Enter y2 : ");
   scanf("%d",&p2.x);


   double pow1 = pow(p2.x-p1.x , 2);
   double pow2=  pow(p2.y-p1.y, 2);
   float d = sqrt(pow1+pow2);

   printf("The distance is : %f",d);
    return 0;
}
