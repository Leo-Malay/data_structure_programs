/*
*   A program to swap values by the use of method : call by values.
*   @Author: Malay Bhavsar
*/

#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a, b;
    printf("Swaping values[Method: call by refrence]");
    printf("\nEnter num1: ");
    scanf("%d", &a);
    printf("Enter num2: ");
    scanf("%d", &b);

    // Displaying and swaping.
    printf("Before swap: a=%d, b=%d\n", a, b);

    swap(&a, &b);

    printf("After swap: a=%d, b=%d\n", a, b);

    return 0;
}