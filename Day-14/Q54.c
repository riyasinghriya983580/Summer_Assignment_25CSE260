// Q54. Frequency of an Element

#include <stdio.h>

int main() {
    int arr[100], n, key, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to find frequency: ");
    scanf("%d", &key);

    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            count++;
    }

    printf("Frequency = %d", count);

    return 0;
}