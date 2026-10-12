#include <stdio.h>

int main()
{
    int a[10][10], transpose[10][10];
    int n, i, j;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            transpose[j][i] = a[i][j];

    printf("Transpose of matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }

    return 0;
}
