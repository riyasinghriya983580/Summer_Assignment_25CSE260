// Q58. Rotate Array Left

#include <stdio.h>

int main() {
    int arr[100], n, first;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    first = arr[0];

    for(int i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];

    arr[n - 1] = first;

    printf("Array after left rotation: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}