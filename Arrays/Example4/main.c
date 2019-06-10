#include <stdio.h>
#include <stdlib.h>

void main()
{
    int arr[5] = {3,1,2,11,20};
    int userInput;
    int flag=0;
    printf("Please Enter The Number you want to search for : ");
    scanf("%d",&userInput);
    for(int i =0; i<5; i++)
    {
        if(arr[i] == userInput)
        {
            printf("found");
            flag=1;
            break;
        }

    }
    if(flag==0)
    {
        printf("not found");
    }

}
