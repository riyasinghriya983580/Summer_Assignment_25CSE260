// Q61. Find Missing Number in Array

#include <stdio.h>

int main() {
    int arr[100], n, sum = 0, expectedSum;

    printf("Enter n (for numbers 1 to n): ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n - 1);

    for(int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    expectedSum = n * (n + 1) / 2;

    printf("Missing Number = %d", expectedSum - sum);

    return 0;
}