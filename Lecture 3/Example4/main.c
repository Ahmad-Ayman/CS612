#include <stdio.h>
#include <stdlib.h>

int main()
{
    /// Declare an array
    int v[3]={10,100,200};

    /// Declare pointer variable
    int *ptr;

    /// Assign the address of v[0] to ptr
    ptr = v;

    for(int i =0; i<3;i++)
    {
        printf("Value of *ptr = %d\n",*ptr);
        printf("Value of ptr = %p\n\n",ptr);

        /// Increment pointer ptr by 1 >> point to the second element in the array
        ptr++;
    }
    return 0;
}
