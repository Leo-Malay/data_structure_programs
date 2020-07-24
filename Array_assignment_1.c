/*
*   Program to find wheather A or B is subsequence of each other.
*   @Author: Malay Bhavsar
*/
#include <stdio.h>
#include <strings.h>

int main()
{
    char A[30], B[30];
    printf("Enter string A:");
    gets(A);
    printf("\nEnter string B:");
    gets(B);

    int lenA, lenB, temp = 0, count = 0;
    lenA = strlen(A);
    lenB = strlen(B);
    if (lenA >= lenB)
    {
        for (int i = 0; i < lenB; i++)
        {
            for (int j = temp; j < lenA; j++)
            {
                if (B[i] == A[j])
                {
                    count++;
                    temp = j;
                    break;
                }
            }
        }
        if (count == lenB)
        {
            printf("True : B is subsequence of A");
        }
        else
        {
            printf("False : B is not subsequence of A");
        }
    }
    else
    {
        for (int i = 0; i < lenA; i++)
        {
            for (int j = temp; j < lenB; j++)
            {
                if (A[i] == B[j])
                {
                    count++;
                    temp = j;
                    break;
                }
            }
        }
        if (count == lenA)
        {
            printf("True : A is subsequence of B");
        }
        else
        {
            printf("False : A is not subsequence of B");
        }
    }
    return 0;
}
