//Q24. Find xⁿ Without Using pow()
#include <stdio.h>

int main() {
    int x, n, result = 1;

    printf("Enter base and power: ");
    scanf("%d %d", &x, &n);

    for(int i = 1; i <= n; i++) {
        result *= x;
    }

    printf("Answer = %d", result);

    return 0;
}