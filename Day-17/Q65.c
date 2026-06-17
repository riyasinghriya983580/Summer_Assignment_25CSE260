// Q65. Merge Arrays

#include <stdio.h>

int main() {
    int a[100], b[100], c[200];
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    for(int i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    for(int i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    for(int i = 0; i < n1; i++)
        c[i] = a[i];

    for(int i = 0; i < n2; i++)
        c[n1 + i] = b[i];

    printf("Merged Array: ");

    for(int i = 0; i < n1 + n2; i++)
        printf("%d ", c[i]);

    return 0;
}