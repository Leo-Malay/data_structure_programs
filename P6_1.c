/*
*   This programs displays the use of pop(),push(),display(),peep(),empty()
*   @Author: Malay Bhavsar
*/

#include <stdio.h>
#include <cstdlib>

#define SIZE 5
int *stack, top = -1, option = 0, num;

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
// To display stack.
void display()
{
    if (isEmpty() == 0)
    {
        printf("The stack is empty!\n");
    }
    else
    {
        printf("\nFollowing is your Stack!\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", *(stack + i));
        }
    }
    printf("Success!\n");
}
// To pop the top shelf.
void pop()
{
    if (isEmpty() == 0)
    {
        printf("The stack is empty!\n");
    }
    else
    {
        *(stack + top) = 0;
        top -= 1;
    }
    printf("Success!\n");
}
// To push to the top of stack
void push()
{
    printf("Enter the element to be entered: ");
    scanf("%d", &num);
    top += 1;
    *(stack + top) = num;
    printf("Success!\n");
}
// To get the top element in the stack.
void peek()
{
    printf("Elelment on the top of stack is %d", *(stack + top));
}

int main()
{
    stack = (int *)malloc(SIZE * sizeof(int));
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
            switch (option)
            {
            case 1:
                display();
                break;
            case 2:
                push();
                break;
            case 3:
                pop();
                break;
            case 4:
                peek();
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
