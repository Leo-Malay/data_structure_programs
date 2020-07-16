/*
*   This programs displays the use of pop(),push(),display(),peep(),empty()
*   @Author: Malay Bhavsar
*/

#include <stdio.h>
#include <cstdlib>

#define SIZE 5
int option = 0, num;
struct s
{
    int *stack, top = -1;
};
// To display stack.
void display(struct s new_stack)
{
    if (new_stack.top == -1)
    {
        printf("The stack is empty!\n");
    }
    else
    {
        printf("\nFollowing is your Stack!\n");
        for (int i = new_stack.top; i >= 0; i--)
        {
            printf("%d\n", *(new_stack.stack + i));
        }
    }
    printf("Success!\n");
}
// To pop the top shelf.
struct s pop(struct s new_stack)
{
    if (new_stack.top == -1)
    {
        printf("The stack is empty!\n");
    }
    else
    {
        *(new_stack.stack + new_stack.top) = 0;
        new_stack.top -= 1;
    }
    printf("Success!\n");
    return new_stack;
}
// To push to the top of stack
struct s push(struct s new_stack)
{
    printf("Enter the element to be entered: ");
    scanf("%d", &num);
    new_stack.top += 1;
    *(new_stack.stack + new_stack.top) = num;
    printf("Success!\n");
    return new_stack;
}
// To get the top element in the stack.
void peek(struct s new_stack)
{
    printf("Elelment on the top of stack is %d", *(new_stack.stack + new_stack.top));
}

int main()
{
    struct s new_stack;
    new_stack.stack = (int *)malloc(SIZE * sizeof(int));
    if (new_stack.stack == NULL)
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
                display(new_stack);
                break;
            case 2:
                new_stack = push(new_stack);
                break;
            case 3:
                new_stack = pop(new_stack);
                break;
            case 4:
                peek(new_stack);
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
    free(new_stack.stack);
    return 0;
}
