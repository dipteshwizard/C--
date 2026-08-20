/*write a function that takes array as an argument and print all the elements using a pointer*/
#include<stdio.h>
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Array elements: ");
    printArray(arr, size);
    
    return 0;
}