// Q63. Find Pair with Given Sum

#include <stdio.h>

int main() {
    int arr[100], n, target, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter target sum: ");
    scanf("%d", &target);

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                printf("Pair: %d %d", arr[i], arr[j]);
                found = 1;
                break;
            }
        }
        if(found)
            break;
    }

    if(!found)
        printf("No Pair Found");

    return 0;
}