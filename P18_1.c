/*
*	To implement Quick Sort
*	@Author: Malay Bhavsar
*/
#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int divide_arr(int arr[], int low, int high)
{
	int point = arr[high];
	int i = low - 1;
	for (int j = low; j <= high - 1; j++)
	{
		if (arr[j] < point)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return i + 1;
}

void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		// Dividing the array
		int point = divide_arr(arr, low, high);
		quickSort(arr, low, point - 1);
		quickSort(arr, point + 1, high);
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
	quickSort(arr, 0, N - 1);
	// Displaying the array after sorting.
	printf("\nAfter Sort: ");
	for (int j = 0; j < N; j++)
		printf("%d ", arr[j]);
	return 0;
}
