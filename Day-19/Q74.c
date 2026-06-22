// Q74. Subtract Matrices

#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10], r, col;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &col);

    for(int i = 0; i < r; i++)
        for(int j = 0; j < col; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < r; i++)
        for(int j = 0; j < col; j++)
            scanf("%d", &b[i][j]);

    for(int i = 0; i < r; i++)
        for(int j = 0; j < col; j++)
            c[i][j] = a[i][j] - b[i][j];

    printf("Result Matrix:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < col; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}