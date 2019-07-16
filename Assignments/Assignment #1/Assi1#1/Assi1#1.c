#include <stdio.h>

void rotateTheArrayByOneElement(int arr[], int size) {
    int temp = arr[0];
    int i;
    for (i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[i] = temp;
}

int main() {
    int size1;

    printf("Enter the  array size ");
    scanf("%d", &size1);
    int arr1[size1];
    for (int i = 0; i < size1; i++) {
        printf("Enter element number %d in the first array ", i + 1);
        scanf("%d", &arr1[i]);
    }
    int n;
    printf("Enter the number of rotated elements : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        rotateTheArrayByOneElement(arr1, size1);
    }

    for (int i = 0; i < size1; i++) {
        printf("Element at index %d is : %d\n", i, arr1[i]);
    }

//    int temp[n];
//    for (int i = 0; i < n; i++) {
//        temp[i] = arr1[i];
//    }
//    for (int i = 0; i < size1; i++) {
//        int si = i + n;
//        if (si < size1) {
//            arr1[i] = arr1[i + n];
//        } else {
//            break;
//        }
//
//    }
//    int j = 0;
//    if (size1 % 2 == 0) {
//        for (int i = n; i < size1; i++) {
//            arr1[i] = temp[j];
//            j++;
//        }
//    } else {
//        for (int i = n + 1; i < size1; i++) {
//            arr1[i] = temp[j];
//            j++;
//        }
//    }
//
//


    return 0;
}