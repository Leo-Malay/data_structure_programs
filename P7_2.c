/*
*   This program helps in converting Inflix to postflix.
*   @Author: Malay Bhavsar
*/

#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>
#include <math.h>

#define SIZE 20
float *stack;
int top = -1;

// Code snippet for checking if stack is empty or not.
int isEmpty()
{
    if (top == -1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void pop()
{
    if (isEmpty() != 0)
    {
        *(stack + top) = 0;
        top -= 1;
    }
}
// To push to the top of stack
void push(char c)
{
    top += 1;
    *(stack + top) = c;
}

int main()
{
    stack = (float *)malloc(SIZE * sizeof(float));
    if (stack == NULL)
    {
        printf("Memory not allocated!\n");
        exit(0);
    }
    else
    {
        printf("Memory allotted!\n\n");
        int i = 0;
        float num1, num2, total, j;
        char str[] = "23+41+*62/^", c;
        while (str[i] != '\0')
        {
            c = str[i];
            if (top >= 1)
            {
                num1 = *(stack + top - 1);
                num2 = *(stack + top);
            }
            switch (c)
            {
            case '-':
                total = num1 - num2;
                pop();
                pop();
                push(total);
                break;
            case '+':
                total = num1 + num2;
                pop();
                pop();
                push(total);
                break;
            case '*':
                total = num1 * num2;
                pop();
                pop();
                push(total);
                break;
            case '/':
                total = num1 / num2;
                pop();
                pop();
                push(total);
                break;
            case '^':
                total = pow(num1, num2);
                pop();
                pop();
                push(total);
                break;
            default:
                j = c - '0';
                push(j);
                break;
            }
            i++;
        }
        while (top != -1)
        {
            pop();
        }
        printf("\nOutput: %0.2f", total);
    }

    free(stack);
    return 0;
}
