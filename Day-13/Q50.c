// Q50. Find Sum and Average of Array

#include <stdio.h>

int main() {
    int arr[100], n, sum = 0;
    float average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", average);

    return 0;
}