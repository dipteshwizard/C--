/*Add two numbers using pointers*/
#include <stdio.h>

int main() {
    int a,b;
    int *p1 = &a;
    int *p2 = &b;
    int sum;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    sum = *p1 + *p2;

    printf("Sum: %d\n", sum);
    
    return 0;
}