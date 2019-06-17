#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    int temp=arr[0];
    for (int i=0;i<6;i++){
        arr[i] = arr[i+1];
    }
    arr[6]=temp;


    for (int i =0 ; i < 7; i++){
        printf("The number in index %d is : %d\n",i,arr[i]);
    }
    return 0;
}

