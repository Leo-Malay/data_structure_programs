/*
*   This program adds n number using malloc() and free()
*   @Author: Malay Bhavsar
*/

#include <stdio.h>
#include <cstdlib>

int main()
{
    int *ptr, n, num, total = 0;
    // Getting users input for number of number
    printf("Enter number of numbers to be added: ");
    scanf("%d", &n);
    // Getting the memory block.
    ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    // Taking numbers as input and adding them.
    for (int i = 0; i < n; i++)
    {
        printf("Number[%d]: ", i);
        scanf("%d", ptr + i);
        total += *(ptr + i);
    }
    printf("\nYour total is %d", total);
    // De-allocating the memory we allocated
    free(ptr);
    return 0;
}