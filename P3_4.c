/*
*   This program is for deleting an element in an array by index
*   @Author: Malay Bhavsar
*/
#include <stdio.h>

int main()
{
    // Declaring Array.
    int num, index, temp;
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
    printf("\nEnter the index of element: ");
    scanf("%d", &index);
    for (int j = index; j < num - 1; j++)
    {
        temp = arr[j + 1];
        arr[j + 1] = NULL;
        arr[j] = temp;
    }
    // Printintg the array.
    printf("\nNew Array: ");
    for (int k = 0; k < num - 1; k++)
    {
        printf("%d  ", arr[k]);
    }
    return 0;
}