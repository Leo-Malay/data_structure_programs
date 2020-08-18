/*
*   Program to implement a Double ended queue.
*   @Author: Malay Bhavsar
*/

#include <stdio.h>
#include <cstdlib>

#define SIZE 10
int queue[SIZE], front = -1, rear = -1, num;

void insert_(int num, char type)
{
    // A function for inserting the request.
    if (rear >= SIZE)
    {
        printf("OverFlow Queue\n");
    }
    else if (type == 'f')
    {
        int i = rear + 1, temp;
        while (i != -1)
        {
            i--;
            queue[i + 1] = queue[i];
        }
        queue[0] = num;
        rear += 1;
    }
    else if (type == 'r')
    {
        rear += 1;
        queue[rear] = num;
    }
    else
    {
        printf("Invalid type\n");
    }
}

void delete_(char type)
{
    // A function for inserting the request.
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    if (type == 'f')
    {
        if (rear == -1)
        {
            printf("Queue Empty\n");
        }
        else
        {
            int i = -1, temp;
            while (i != rear)
            {
                i++;
                queue[i] = queue[i + 1];
            }
            rear -= 1;
        }
    }
    else if (type == 'r')
    {
        if (front == -1)
        {
            printf("Queue Empty\n");
        }
        else
        {
            rear -= 1;
            queue[rear] = 0;
        }
    }
    else
    {
        printf("Invalid type\n");
    }
}

void display()
{
    // A function for inserting the request.
    if (rear == front)
    {
        printf("Queue Empty\n");
    }
    else
    {
        int temp = front;
        printf("Your queue is as follow:\n");
        while (temp != rear)
        {
            temp++;
            printf("%d  ", queue[temp]);
        }
    }
}

int main()
{
    printf("\nChoose from following\n<1>Insert front\n<2>Insert rear\n<3>Delete front\n<4>Delete rear\n<5>Display\n<6>Exit\n");
    int option = -1, n;
    while (option != 6)
    {
        printf("\nOption: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Enter number:");
            scanf("%d", &n);
            insert_(n, 'f');
            break;
        case 2:
            printf("Enter number:");
            scanf("%d", &n);
            insert_(n, 'r');
            break;
        case 3:
            delete_('f');
            break;
        case 4:
            delete_('r');
            break;
        case 5:
            display();
            break;
        case 6:
            printf("Thank you!\n");
            break;
        default:
            printf("Select Appropiate option!\n");
            break;
        }
    }
    return 0;
}