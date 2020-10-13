/*
*   Program to implement Selection Sort.
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
    // Taking the input.
    int N, j = 0;
    printf("Number of elements: ");
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        printf("Enter Element[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Printing the original array.
    printf("\nOriginal Array: ");
    for (int i = 0; i < N; i++)
    {
        printf(" %d", arr[i]);
    }
    // Running the algorithm
    int min;
    for (int i = 0; i < N; i++)
    {
        min = i;
        for (int j = i; j < N; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        if (arr[i] > arr[min])
        {
            swap(&arr[i], &arr[min]);
        }
    }
    // Printing the output array.
    printf("\nSorted Array: ");
    for (int i = 0; i < N; i++)
    {
        printf(" %d", arr[i]);
    }
}