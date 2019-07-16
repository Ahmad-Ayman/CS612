#include <stdio.h>
#include <stdbool.h>


int main() {
    int size1, size2;
    bool isSame = true;
    printf("Enter the 1st array size ");
    scanf("%d", &size1);
    int arr1[size1];
    for (int i = 0; i < size1; i++) {
        printf("Enter element number %d in the first array ", i + 1);
        scanf("%d", &arr1[i]);
    }
    printf("Enter the 2nd array size ");
    scanf("%d", &size2);
    int arr2[size2];
    for (int i = 0; i < size2; i++) {
        printf("Enter element number %d in the second array ", i + 1);
        scanf("%d", &arr2[i]);
    }
    if (size1 != size2) {
        isSame = false;
        printf("Not Same Array");
        return 0;
    } else {
        for (int i = 0; i < size1; i++) {
            if (arr1[i] != arr2[i]) {
                isSame = false;
                printf("Not Same Array");
                break;
            }
        }
        if (isSame) {
            printf("Same Array");
        }

    }

    return 0;
}