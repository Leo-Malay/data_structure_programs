/*
*   This program is for adding the value of array at an specific place.
*   @Author: Malay Bhavsar
*/

#include <stdio.h>

int main()
{
    // Declaring Array.
    int num, count, temp, temp2, value, m = 0;
    printf("Enter number of elements: ");
    scanf("%d", &num);

    // Taking input from User.
    int arr[num + 1];
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

    // Getting the values of new array.
    printf("\nEnter value of array element: ");
    scanf("%d", &value);

    // Finding the approcriate index in the array;
    while (arr[m] < value)
    {
        m += 1;
    }

    // Inserting the value into the array.
    temp2 = value;
    for (int j = m; j < num + 1; j++)
    {
        temp = arr[j];
        arr[j] = temp2;
        temp2 = temp;
    }

    // Displaying the array.
    printf("\nNew Array: ");
    for (int k = 0; k < num + 1; k++)
    {
        printf("%d  ", arr[k]);
    }
    return 0;
}