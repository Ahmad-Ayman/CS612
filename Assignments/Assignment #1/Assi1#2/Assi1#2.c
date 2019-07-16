#include <stdio.h>


int main() {

    int pos;
    int SIZE = 8;
    printf("Enter the position you want to delete in the array : ");
    scanf("%d", &pos);
    int arr[] = {5, 1, 7, 51, 98, 64, 212, 42};

    int startOfarray = pos - 1;
    for (int i = startOfarray; i < SIZE; i++) {
        arr[i] = arr[i + 1];
    }
    SIZE--;

    for (int i = 0; i < SIZE; i++) {
        printf("Element number %d is = %d\n", i + 1, arr[i]);
    }


    return 0;
}