/*
*   Program to print all the element without boundry.
*   @Author: Malay Bhavsar
*/

#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of column: ");
    scanf("%d", &n);
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter value for arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    // Printing the values without the borders.
    for (int i = 1; i < m - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
