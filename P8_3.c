/*
*   A program to find the gcd of the program.
*   @Author: Malay Bhavsar
*/
#include <stdio.h>

int gcd(long num1, long num2)
{
    if (num2 == 0)
    {
        return num1;
    }
    else
    {
        return gcd(num2, num1 % num2);
    }
}

int main()
{
    int num1, num2, temp;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    if (num2 > num1)
    {
        temp = num2;
        num2 = num1;
        num1 = temp;
    }
    printf("\nGreatest Common Divisor of %d and %d is %d", num1, num2, gcd(num1, num2));

    return 0;
}
