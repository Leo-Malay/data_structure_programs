/*
*   This program inserts an element at any given position.
*   @Author: Malay Bhavsar
*/

#include <stdio.h>

int main()
{
    // Declaring Array.
    int num, value, index, temp, temp2;
    printf("Enter number of elements: ");
    scanf("%d", &num);

    // Taking input from User.
    int arr[num + 1];
    for (int i = 0; i < num; i++)
    {
        printf("Enter element[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Taking new array value and index as input.
    printf("\nEnter value of array element: ");
    scanf("%d", &value);
    printf("\nEnter index of array element: ");
    scanf("%d", &index);

    // Inserting the value into the array.
    // We have already declared the size of array one bigger.
    temp2 = value;
    for (int j = index; j < num + 1; j++)
    {
        temp = arr[j];
        arr[j] = temp2;
        temp2 = temp;
    }
    // Printing the new array;
    for (int k = 0; k < num + 1; k++)
    {
        printf("%d  ", arr[k]);
    }
    return 0;
}