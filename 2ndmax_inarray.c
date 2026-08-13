/*Find the second largest element in an array*/
#include <stdio.h>

int main() {
    int arr[10], i, max, second_max, n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    second_max = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            second_max = max;
            max = arr[i];
        } else if (arr[i] > second_max && arr[i] != max) {
            second_max = arr[i];
        }
    }

    printf("The second largest element in the array is: %d\n", second_max);

    return 0;
}