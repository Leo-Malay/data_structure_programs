/*
*   This program sorts the input array into acending order.
*   @Feature: Sort any number of array of any size within INT
*   @Author: Malay Bhavsar
*/

#include <stdio.h>

int main()
{
    // Declaring Array.
    int num, count, temp;
    printf("Enter number of elements: ");
    scanf("%d", &num);

    // Taking input from User.
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter element[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Sorting the array.
    do
    {
        count = 0;
        for (int j = 1; j < num; j++)
        {
            if (arr[j - 1] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
                count += 1;
            }
        }
    } while (count != 0);
    // Printintg the array.
    for (int k = 0; k < num; k++)
    {
        printf("%d  ", arr[k]);
    }
    return 0;
}