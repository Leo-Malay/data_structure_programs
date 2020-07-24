/*
*   Program to sort in ascending order and printing unique intergres.
*   @Author: Malay Bhavsar
*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements:");
    scanf("%d", &n);
    int arr[n], count = -1, j = 0, temp;
    for (int i = 0; i < n; i++)
    {
        printf("Enter element[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    // Sorting the input array.
    while (count != 0)
    {
        count = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                count++;
            }
        }
    }
    // Printing unique number.
    temp = arr[0];
    printf("\nUnique numbers are: %d", arr[0]);
    for (int k = 1; k < n; k++)
    {
        if (temp != arr[k])
        {
            printf(" %d", arr[k]);
            temp = arr[k];
        }
    }
    return 0;
}