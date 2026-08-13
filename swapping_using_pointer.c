/*Swap two numbers using pointers*/
#include <stdio.h>

int main() {
    int a, b;
    int *ptr1 = &a;
    int *ptr2 = &b;
    int temp;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    printf("Before Swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("After swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}