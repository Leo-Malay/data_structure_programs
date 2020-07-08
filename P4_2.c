/*
*   This program displays a array in form of matrix.
*   @Author: Malay Bhavsar
*/

#include <stdio.h>

int main()
{
    // Taking input from User.
    int arr1[3][3], arr2[3][3], arr_f[3][3];
    printf("Enter details of Matrix 1: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter element[%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter details of Matrix 2: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter element[%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    // Displaying the matrix.
    printf("\nNew matrix after adding them both: \n");
    for (int k = 0; k < 3; k++)
    {
        for (int l = 0; l < 3; l++)
        {
            arr_f[k][l] = arr1[k][l] + arr2[k][l];
            printf("%d\t", arr_f[k][l]);
        }
        printf("\n");
    }
    return 0;
}