/*
*   Program to implement Bubble sort Algorithm.
*   @Author: Malay Bhavsar
*/

#include <stdio.h>

void swap(int *a, int *b)
{
    // Swaping the values given.
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int N, j = 0;
    printf("Number of elements: ");
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        printf("Enter Element[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nOriginal Array: ");
    for (int i = 0; i < N; i++)
    {
        printf(" %d", arr[i]);
    }
    // Running the algorithm
    bool swapped;
    for (int i = 0; i < N; i++)
    {
        swapped = false;
        for (int j = 0; j < N - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                swap(&arr[j + 1], &arr[j]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
    // Printing the output array.
    printf("\nSorted Array: ");
    for (int i = 0; i < N; i++)
    {
        printf(" %d", arr[i]);
    }
}