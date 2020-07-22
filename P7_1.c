/*
*   This program helps in converting Inflix to postflix.
*   @Author: Malay Bhavsar
*/

#include <stdio.h>
#include <cstdlib>

#define SIZE 20
char *stack;
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
    stack = (char *)malloc(SIZE * sizeof(char));
    if (stack == NULL)
    {
        printf("Memory not allocated!\n");
        exit(0);
    }
    else
    {
        printf("Memory allotted!\n\n");
        int i = 0;
        char str[] = "((A+B)*(C+B))^(E/F)", c;
        while (str[i] != '\0')
        {
            c = str[i];
            switch (c)
            {
            case '-':
                if (*(stack + top) == '^' || *(stack + top) == '/' || *(stack + top) == '*' || *(stack + top) == '+')
                {
                    while (top != -1)
                    {
                        printf("%c", *(stack + top));
                        pop();
                    }
                }
            case '+':
                if (*(stack + top) == '^' || *(stack + top) == '/' || *(stack + top) == '*')
                {
                    while (top != -1)
                    {
                        printf("%c", *(stack + top));
                        pop();
                    }
                }
            case '*':
                if (*(stack + top) == '^' || *(stack + top) == '/')
                {
                    while (top != -1)
                    {
                        printf("%c", *(stack + top));
                        pop();
                    }
                }
            case '/':
                if (*(stack + top) == '^')
                {
                    while (top != -1)
                    {
                        printf("%c", *(stack + top));
                        pop();
                    }
                }
            case '^':
            case '(':
                push(c);
                break;
            case ')':
                while (*(stack + top) != '(')
                {
                    printf("%c", *(stack + top));
                    pop();
                }
                pop();
                break;
            default:
                printf("%c", c);
                break;
            }
            i++;
        }
        while (top != -1)
        {
            printf("%c", *(stack + top));
            pop();
        }
    }
    free(stack);
    return 0;
}
