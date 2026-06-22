// Q78. Check Symmetric Matrix

#include <stdio.h>

int main() {
    int a[10][10], n, flag = 1;

    printf("Enter size: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("Symmetric Matrix");
    else
        printf("Not Symmetric");

    return 0;
}