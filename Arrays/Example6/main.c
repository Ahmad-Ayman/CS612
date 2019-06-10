#include <stdio.h>
#include <stdlib.h>

void main()
{
    char aa[]= "madama";
    int flag=0;
    int s = sizeof(aa)-1;
    for(int i = 0 ; i <s/2 ; i++)
    {
        if(aa[i] != aa[s-i-1])
        {
            flag=1;
            printf("Not Palindrome");
            break;
        }

    }
    if(flag == 0)
    {
        printf("Palindrom");
    }

}
