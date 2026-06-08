//Q23. Count Set Bits in a Number
#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0) {
        if(n % 2 == 1)
            count++;

        n /= 2;
    }

    printf("Set Bits = %d", count);

    return 0;
}