/*
*    program to solve the tower of Hanoi.
*   @Author: Malay Bhavsar
*/
#include <stdio.h>

void towerHanoi(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        printf("Move Top Plate %d from %c to %c\n", n, from, to);
        return;
    }
    towerHanoi(n - 1, from, aux, to);
    printf("Move Top Plate %d from %c to %c\n", n, from, to);
    towerHanoi(n - 1, aux, to, from);
}

int main()
{
    int n = 3;
    towerHanoi(n, 'A', 'B', 'C');
    return 0;
}