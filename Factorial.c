/*
*   Program to print a simple elemnt of fibonacci series.
*   @Author: Malay Bhavsar
*/

#include <stdio.h>
int count = 1;

int fl(int n)
{
    if (n == 0)
    {
        return count;
    }
    else
    {
        count = count * n;
        return fl(n - 1);
    }
}

int main()
{
    int n;
    printf("Enter number of element to be printed: ");
    scanf("%d", &n);
    printf("Your factorial of %d is %d", n, fl(n));
    return 0;
}