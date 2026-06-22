// Q80. Column-wise Sum

#include <stdio.h>

int main() {
    int a[10][10], r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(int j = 0; j < c; j++) {
        int sum = 0;
        for(int i = 0; i < r; i++)
            sum += a[i][j];

        printf("Column %d sum = %d\n", j+1, sum);
    }

    return 0;
}