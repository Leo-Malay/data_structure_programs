/*
*   This program finds all the index of required character or return none found.
*   @Author: Malay Bhavsar
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    // Declaring Array.
    int num, f_count = 0;
    printf("Enter number of elements: ");
    scanf("%d", &num);

    // Taking input from User.
    int arr[num + 1];
    printf("Enter String: ");
    scanf("%s", arr);
    printf("You entered: %s", arr);
    // Taking new array value and index as input.
    printf("\nEnter character of array to be searched: ");
    int ch;
    scanf("%d", &ch);

    // Finding all the index of enterd character.
    for (int i = 0; i < num; i++)
    {
        if (arr[i] == ch)
        {
            printf("Found at Index: %d", i);
            f_count += 1;
        }
    }
    if (f_count == 0)
    {
        printf("\nNo such character found!");
    }
    return 0;
}