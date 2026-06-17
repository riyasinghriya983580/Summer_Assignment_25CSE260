// Q67. Intersection of Arrays

#include <stdio.h>

int main() {
    int a[100], b[100];
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    for(int i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    for(int i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    printf("Intersection: ");

    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if(a[i] == b[j]) {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    return 0;
}