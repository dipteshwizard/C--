/*Find the maximum of two numbers using pointers*/
#include <stdio.h>

int main() {
    int a,b;
    int *p1 = &a;
    int *p2 = &b;
    int *max;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    if (*p1 > *p2) {
        max = p1;
    } else {
        max = p2;
    }

    printf("Maximum: %d\n", *max);

    return 0;
}