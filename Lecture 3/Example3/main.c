#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var = 10;
  int *ptr = &var;
  int **ptr2=&ptr;

  **ptr2=50;
  printf("ptr value -address of var- is :  %p\n",ptr);
  printf("ptr2 value -address of ptr- is : %p\n",ptr2);
  printf("var value is : %d\n",var);
    return 0;
}
