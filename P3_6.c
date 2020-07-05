/*
*   This program gives shift of n number given by the user to the entire array.  
*   @Author: Malay Bhavsar
*/
#include <stdio.h>

int main()
{
    // Declaring Array.
    int num, shift, index;
    printf("Enter number of character: ");
    scanf("%d", &num);
    char arr[10], new_arr[10];
    printf("\nEnter String : ");
    scanf("%s", arr);

    // Taking new array value and index as input.
    printf("\nEnter value of shift: ");
    scanf("%d", &shift);

    // Adding shift to all elements of array.
    for (int i = 0; i < num; i++)
    {
        index = i + shift;
        if (index >= num)
        {
            index -= num;
        }
        new_arr[index] = arr[i];
    }

    // Printing the new array;
    printf("\nNew array after shift: ");
    for (int k = 0; k < 10; k++)
    {
        printf("%c", new_arr[k]);
    }
    return 0;
}