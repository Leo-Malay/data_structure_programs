/*
*   This programs displays the use of pop(),push(),display(),peep(),empty()
*   @Author: Malay Bhavsar
*/

#include <stdio.h>
#include <cstdlib>

#define SIZE 15
int *stack, top = -1, bottom = SIZE, option = 0, num;

// Code snippet for checking if stack is empty or not.
int isEmpty(int numb)
{
    if (numb == 0)
    {
        if (top + bottom == SIZE - 1)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else if (numb == 1)
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
    else if (numb == 2)
    {
        if (bottom == SIZE)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        printf("invalid stack number!\n");
        return -1;
    }
}
// To display stack.
void display(int numb)
{
    printf("\nFollowing is your Stack!\n");
    if (numb == 1 && isEmpty(numb) == 1)
    {
        for (int i = top; i > -1; i--)
        {
            printf("%d\n", *(stack + i));
        }
    }
    else if (numb == 2 && isEmpty(numb) == 1)
    {
        for (int i = bottom; i < SIZE; i++)
        {
            printf("%d\n", *(stack + i));
        }
    }
    else
    {
        printf("Invalid stack num!");
    }
}
// To pop the top shelf.
void pop(int numb)
{
    if (isEmpty(0) == 0)
    {
        printf("Both stack are empty\n");
    }
    else
    {
        if (numb == 1 && isEmpty(numb) == 1)
        {
            *(stack + top) = 0;
            top -= 1;
        }
        else if (numb == 2 && isEmpty(numb) == 1)
        {
            *(stack + bottom) = 0;
            bottom += 1;
        }
        else
        {
            printf("Invalid stack num!\n");
        }
    }
}
// To push to the top of stack
void push(int numb, int num)
{
    if (numb == 1)
    {
        top += 1;
        *(stack + top) = num;
    }
    else if (numb == 2)
    {
        bottom -= 1;
        *(stack + bottom) = num;
    }
    else
    {
        printf("Invalid stack num!\n");
    }
}
// To get the top element in the stack.
void peek(int numb)
{
    if (numb == 1)
    {
        printf("Elelment on the top of stack is %d", *(stack + top));
    }
    else if (numb == 2)
    {
        printf("Elelment on the top of stack is %d", *(stack + bottom));
    }
    else
    {
        printf("Invalid stack num!\n");
    }
}

int main()
{
    stack = (int *)malloc(SIZE * sizeof(int));
    int numb;
    if (stack == NULL)
    {
        printf("Memory not allocated!\n");
        exit(0);
    }
    else
    {
        printf("Memory allotted!\n\n");
        while (option != 5)
        {
            printf("\n-----: Stack Operation :-----\n");
            printf("1> Display\n2> Push\n3> Pop\n4> Peek\n5> Exit\n###>");
            scanf("%d", &option);
            printf("Stack num: ");
            scanf("%d", &numb);
            switch (option)
            {
            case 1:
                display(numb);
                break;
            case 2:
                printf("Enter number to be pushed: ");
                scanf("%d", &num);
                push(numb, num);
                break;
            case 3:
                pop(numb);
                break;
            case 4:
                peek(numb);
                break;
            case 5:
                printf("Thank you For using this program!");
                break;
            default:
                printf("Please select an approicate option!");
                break;
            }
        }
    }
    free(stack);
    return 0;
}
