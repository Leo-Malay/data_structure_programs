/*
*   Program to print a simple elemnt of fibonacci series.
*   @Author: Malay Bhavsar
*/

#include <stdio.h>
int count = 0;

int fs(int num1, int num2, int n)
{
    printf(" %d", num1);
    num1 = num1 + num2;
    count++;
    if (n == count)
    {
        return 0;
    }
    else
    {
        return fs(num2, num1, n);
    }
}

int main()
{
    int n;
    printf("Enter number of element to be printed: ");
    scanf("%d", &n);
    fs(0, 1, n);
    return 0;
}