/*Print the pick of an array*/
#include <stdio.h>

int main() {
    int arr[10], i, n, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The pick of array are: ");

    for (i = 0; i < n ; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            count++;
        }
    }

    if (count == 0) {
        printf("No pick found in the array.");
    }
    else{
        printf("The number of picks in the array is: %d", count);
    }
    printf("\n");

    return 0;
}