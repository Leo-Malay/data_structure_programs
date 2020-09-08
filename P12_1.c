/*
*   This program implements queue using linked list
*   @Author: Malay Bhavsar
*/

#include <stdio.h>
#include <cstdlib>

// Defining the Structure of the list.
struct list_node
{
    int data;
    struct list_node *nxt;
};

void insert_node_back(int num, struct list_node *head_node)
{
    struct list_node *new_node = NULL;
    new_node = (struct list_node *)malloc(sizeof(struct list_node));
    new_node->data = num;
    new_node->nxt = NULL;
    while (head_node->nxt != NULL)
    {
        head_node = head_node->nxt;
    }
    head_node->nxt = new_node;
}

void delete_node_front(struct list_node *head_node)
{
    if (head_node->nxt == NULL)
    {
        printf("List Empty!\n");
    }
    else
    {
        struct list_node *temp;
        temp = (struct list_node *)malloc(sizeof(struct list_node));
        temp = head_node->nxt;
        head_node->nxt = temp->nxt;
    }
}

void display(struct list_node *head_node)
{
    head_node = head_node->nxt;
    printf("Queue: ");
    while (head_node != NULL)
    {
        printf(" %d ", head_node->data);
        head_node = head_node->nxt;
    }
}

int main()
{
    struct list_node *head = NULL;
    head = (struct list_node *)malloc(sizeof(struct list_node));
    head->data = NULL;
    head->nxt = NULL;
    int option = -1, num, pos;

    printf("\nChoose The Following:\n<1> Insert\n<2> Delete\n<3> Display\n<4> Exit");
    while (option != 8)
    {
        printf("\nOption: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Enter data: ");
            scanf("%d", &num);
            insert_node_back(num, head);
            break;
        case 2:
            delete_node_front(head);
            break;
        case 3:
            display(head);
            break;
        case 4:
            printf("\nThank you!");
            break;
        default:
            printf("\nChoose an approicate option!\n");
            break;
        }
    }
    return 0;
}