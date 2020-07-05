/*
*   This program is for deleting an element in an array by value
*   @Author: Malay Bhavsar
*/
#include <stdio.h>

int main()
{
    // Declaring Array.
    int num, temp, value, m;
    printf("Enter number of elements: ");
    scanf("%d", &num);

    // Taking input from User.
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter element[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Printintg the array.
    printf("\nOld Array: ");
    for (int k = 0; k < num; k++)
    {
        printf("%d  ", arr[k]);
    }

    // Taking index as input anddeleting the array;
    printf("\nEnter the value of element: ");
    scanf("%d", &value);
    for (m = 0; m < num; m++)
    {
        if (arr[m] == value)
        {
            num -= 1;
            break;
        }
    }
    for (int j = m; j < num; j++)
    {
        temp = arr[j + 1];
        arr[j + 1] = NULL;
        arr[j] = temp;
    }
    // Printintg the array.
    printf("\nNew Array: ");
    for (int k = 0; k < num; k++)
    {
        printf("%d  ", arr[k]);
    }
    return 0;
}