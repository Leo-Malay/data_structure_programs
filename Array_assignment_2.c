/*
*   Program to find wheather A or B is subsequence of each other.
*   @Author: Malay Bhavsar
*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements:");
    scanf("%d", &n);
    int arr[n], sum = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter element[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the sum of pair element: ");
    scanf("%d", &sum);

    for (int j = 0; j < n - 1; j++)
    {
        for (int k = j + 1; k < n; k++)
        {
            if (arr[j] + arr[k] == sum)
            {
                count++;
            }
        }
    }
    printf("\nTotal number of pair are %d", count);
    return 0;
}