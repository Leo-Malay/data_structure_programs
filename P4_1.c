/*
*   This program displays a array in form of matrix.
*   @Author: Malay Bhavsar
*/

#include <stdio.h>

int main()
{
    // Taking input from User.
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter element[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    // Displaying the matrix.
    printf("\nYou entered the following matrix:\n");
    for (int k = 0; k < 3; k++)
    {
        for (int l = 0; l < 3; l++)
        {
            printf("%d\t", arr[k][l]);
        }
        printf("\n");
    }
    return 0;
}