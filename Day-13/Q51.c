// Q51. Find Largest and Smallest Element

#include <stdio.h>

int main() {
    int arr[100], n, largest, smallest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = smallest = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest)
            largest = arr[i];

        if(arr[i] < smallest)
            smallest = arr[i];
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d", smallest);

    return 0;
}