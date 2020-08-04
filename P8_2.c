/*
*   A Pogram to perform binary search.
*   @Author: Malay Bhavsar
*/
#include <stdio.h>
#define SIZE 100
int num_arr[SIZE];

int bs(int lt, int ht, int key)
{
    if (ht >= lt)
    {
        int mt = lt + (ht - lt) / 2;
        if (num_arr[mt] == key)
        {
            return mt;
        }
        else if (num_arr[mt] > key)
        {
            return bs(lt, mt - 1, key);
        }
        else
        {
            return bs(mt + 1, ht, key);
        }
    }
    return -1;
}

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter element[%d]: ", i);
        scanf("%d", &num_arr[i]);
    }
    // Sorting the Array.
    int count, temp;
    do
    {
        count = 0;
        for (int j = 1; j < n; j++)
        {
            if (num_arr[j - 1] > num_arr[j])
            {
                temp = num_arr[j];
                num_arr[j] = num_arr[j - 1];
                num_arr[j - 1] = temp;
                count += 1;
            }
        }
    } while (count != 0);
    // Searching the key.
    int key;
    printf("Enter element to be searched: ");
    scanf("%d", &key);
    printf("Your number is present at index: %d", bs(0, n - 1, key));
    return 0;
}