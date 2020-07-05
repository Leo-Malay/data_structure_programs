/*
*   A program to swap values by the use of method : call by values.
*   @Author: Malay Bhavsar
*/

#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Swaping values[Method: call by value]");
    printf("\nEnter num1: ");
    scanf("%d", &a);
    printf("Enter num2: ");
    scanf("%d", &b);

    // Displaying and swaping.
    printf("Before swap: a=%d, b=%d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swap: a=%d, b=%d\n", a, b);

    return 0;
}