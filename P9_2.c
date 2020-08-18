/*
*   Program to implement a circular queue.
*   @Author: Malay Bhavsar
*/

#include <stdio.h>
#include <cstdlib>

#define SIZE 10
int queue[SIZE], front = -1, rear = -1, num;

void insert_(int num)
{
    // A function for inserting the request.
    if (rear >= SIZE && (rear - SIZE) < front)
    {
        rear = rear - SIZE - 1;
    }
    if (rear >= SIZE || rear + 1 == front)
    {
        printf("OverFlow Queue\n");
    }
    else
    {
        rear += 1;
        queue[rear] = num;
    }
}

void delete_()
{
    // A function for inserting the request.
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    if (rear == -1)
    {
        printf("Queue Empty\n");
    }
    else
    {
        front += 1;
        queue[front] = 0;
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
            if (temp > SIZE)
            {
                temp = 0;
            }
            printf("%d  ", queue[temp]);
        }
    }
}

int main()
{
    int option = -1, n;
    printf("\nChoose from following\n<1>Insert\n<2>Delete\n<3>Display\n<4>Exit\n");
    while (option != 4)
    {
        printf("\nOption: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Enter number:");
            scanf("%d", &n);
            insert_(n);
            break;
        case 2:
            delete_();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Thank you!\n");
            break;
        default:
            printf("Select Appropiate option!\n");
            break;
        }
    }
    return 0;
}