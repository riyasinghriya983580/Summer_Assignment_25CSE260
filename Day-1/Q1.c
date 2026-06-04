// Q1  Sum of First N Natural Numbers
#include <stdio.h>

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    int sum = n * (n + 1) / 2;
    printf("Sum = %d\n", sum);

    return 0;
}