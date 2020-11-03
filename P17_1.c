/*
*   Pogram to implement Merge sort algorithm.
*   @Author: Malay Bhavsar
*/
#include <stdio.h>
#include <stdlib.h>

void merge_arr(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int left_arr[n1], right_arr[n2];

    for (int i = 0; i < n1; i++)
    {
        left_arr[i] = arr[low + i];
    }
    for (int j = 0; j < n2; j++)
    {
        right_arr[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2)
    {
        if (left_arr[i] <= right_arr[j])
        {
            arr[k] = left_arr[i];
            i++;
        }
        else
        {
            arr[k] = right_arr[j];
            j++;
        }
        k++;
    }
    // If an element remains.
    while (i < n1)
    {
        arr[k] = left_arr[i];
        i++;
        k++;
    }

    // If an element remains.
    while (j < n2)
    {
        arr[k] = right_arr[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;
        // Resursive function till the left and right are sorted.
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        merge_arr(arr, low, mid, high);
    }
}

int main()
{
    // Taking the input.
    int N;
    printf("Enter number of elements: ");
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        printf("Elements[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    // Displaying the array before sorting.
    printf("\nBefore Sort: ");
    for (int j = 0; j < N; j++)
        printf("%d ", arr[j]);
    // Running the algorithm.
    merge_sort(arr, 0, N - 1);
    // Displaying the array after sorting.
    printf("\nAfter Sort: ");
    for (int j = 0; j < N; j++)
        printf("%d ", arr[j]);
    return 0;
}
