/*1. print a value and address of a variable using pointer*/
#include <stdio.h>

int main() {
    int x;
    int *p = &x;

    printf("Enter the value of x: \n");
    scanf("%d", &x);

    printf("Value of x: %d\n", *p);
    printf("Address of x: %p\n", p);

    return 0;
}