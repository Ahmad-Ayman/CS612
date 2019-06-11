
#include <stdio.h>

void main()
{
   int arr[5],i;
   printf("size of integer in this compiler is %lu\n",sizeof(int));
   for(i=0; i<5;i++){
    printf("Address arr[%d] is %d\n",i,&arr[i]);
   }
}
