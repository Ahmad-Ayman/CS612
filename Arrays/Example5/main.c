#include <stdio.h>
#include <stdlib.h>

void main()
{
    int arr[6] = {3,1,2,11,20,-1};
    int min = arr[0];
    int max = arr[0];
    for(int i = 0; i<6; i++)
    {

        if(arr[i]<min)
        {
            min=arr[i];
        }
        if(arr[i] > max)
        {
            max=arr[i];
        }
    }
    printf("\nMaximum is : %d and Minimum is : %d\n",max,min);

}
