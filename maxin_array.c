/*Find the maximum element in an array*/
#include <stdio.h>

int main() {
    int arr[10], i, max, n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The maximum element in the array is: %d\n", max);

    return 0;
}