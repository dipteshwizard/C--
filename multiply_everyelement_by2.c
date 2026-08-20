/*write a function that takes array as an argument and multiplies every element by 2 using a pointer*/
#include<stdio.h>
void multiplyByTwo(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) *= 2;
    }
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    multiplyByTwo(arr, size);
    
    printf("Array elements after multiplying by 2:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}