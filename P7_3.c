/*
*   This program helps in converting Inflix to postflix.
*   @Author: Malay Bhavsar
*/

#include <stdio.h>
#include <cstdlib>
#include <string.h>

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
        int i = 0, len_str, m = 0, count = 0, n = 0;
        char str[] = "((A+B)*(C+D))^(E/F)", c;
        len_str = strlen(str);
        while (n != len_str)
        {
            switch (str[n])
            {
            case '(':
            case ')':
                break;
            default:
                count++;
                break;
            }
            n++;
        }
        char new_str[count + 1];
        strrev(str);
        // Conversion Process.
        while (i != len_str)
        {
            c = str[i];
            switch (c)
            {
            case '-':
                if (*(stack + top) == '^' || *(stack + top) == '/' || *(stack + top) == '*' || *(stack + top) == '+')
                {
                    while (top != -1)
                    {
                        if (*(stack + top) != ')')
                        {
                            new_str[m] = *(stack + top);
                            m++;
                        }
                        pop();
                    }
                }
            case '+':
                if (*(stack + top) == '^' || *(stack + top) == '/' || *(stack + top) == '*')
                {
                    while (top != -1)
                    {
                        if (*(stack + top) != ')')
                        {
                            new_str[m] = *(stack + top);
                            m++;
                        }
                        pop();
                    }
                }
            case '*':
                if (*(stack + top) == '^' || *(stack + top) == '/')
                {
                    while (top != -1)
                    {
                        if (*(stack + top) != ')')
                        {
                            new_str[m] = *(stack + top);
                            m++;
                        }
                        pop();
                    }
                }
            case '/':
                if (*(stack + top) == '^')
                {
                    while (top != -1)
                    {
                        if (*(stack + top) != ')')
                        {
                            new_str[m] = *(stack + top);
                            m++;
                        }
                        pop();
                    }
                }
            case '^':
            case ')':
                push(c);
                break;
            case '(':
                while (*(stack + top) != ')')
                {
                    if (*(stack + top) != ')')
                    {
                        new_str[m] = *(stack + top);
                        m++;
                    }
                    pop();
                }
                pop();
                break;
            default:
                new_str[m] = c;
                m++;
                break;
            }
            i++;
        }
        while (top != -1)
        {
            if (*(stack + top) != ')')
            {
                new_str[m] = *(stack + top);
                m++;
            }
            pop();
        }
        strrev(new_str);
        printf("Prefix Output:");
        for (int j = 0; j <= m; j++)
        {
            printf("%c", new_str[j]);
        }
    }
    free(stack);
    return 0;
}
