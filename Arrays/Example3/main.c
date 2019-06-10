#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void main()
{
   int a[SIZE];
   float total=0;
   for(int i = 0; i < SIZE ; i++){
        printf("Enter the value of %d is : ",i);
        scanf("%d",&a[i]);
        if(a[i]%2!=0){
        total+=a[i];
   }
   }
   printf("Average of 10 elements = %.2f \n",total/SIZE);
}
