// Q60. Move Zeroes to End

#include <stdio.h>

int main() {
    int arr[100], n, index = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }

    while(index < n)
        arr[index++] = 0;

    printf("Array after moving zeroes: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}