/*
*   A Program to implement singly circular list.
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

void insert_node_front(int num, struct list_node *head_node)
{
    struct list_node *new_node = NULL;
    new_node = (struct list_node *)malloc(sizeof(struct list_node));
    struct list_node *temp = head_node->nxt;
    head_node->nxt = new_node;
    new_node->data = num;
    new_node->nxt = temp;
}

void insert_node_back(int num, struct list_node *head_node)
{
    struct list_node *temp = NULL;
    temp = (struct list_node *)malloc(sizeof(struct list_node));
    temp->nxt = head_node;
    struct list_node *new_node = NULL;
    new_node = (struct list_node *)malloc(sizeof(struct list_node));
    new_node->data = num;
    new_node->nxt = temp->nxt;
    while (head_node->nxt != temp->nxt)
    {
        head_node = head_node->nxt;
    }
    head_node->nxt = new_node;
}

void insert_node_given_position(int num, int pos, struct list_node *head_node)
{
    for (int i = 1; i < pos; i++)
    {
        head_node = head_node->nxt;
    }
    struct list_node *new_node = NULL;
    new_node = (struct list_node *)malloc(sizeof(struct list_node));
    struct list_node *temp = head_node->nxt;
    head_node->nxt = new_node;
    new_node->data = num;
    new_node->nxt = temp;
}

void delete_node_front(struct list_node *head_node)
{
    if (head_node->nxt == head_node)
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

void delete_node_back(struct list_node *head_node)
{
    if (head_node->nxt == head_node)
    {
        printf("List Empty!\n");
    }
    else
    {
        struct list_node *temp = NULL;
        temp = (struct list_node *)malloc(sizeof(struct list_node));
        temp->nxt = head_node;
        struct list_node *old_node = head_node;
        old_node = old_node->nxt;
        while (old_node->nxt != temp->nxt)
        {
            old_node = old_node->nxt;
            head_node = head_node->nxt;
        }
        head_node->nxt = temp->nxt;
    }
}

void delete_node_given_position(int pos, struct list_node *head_node)
{
    struct list_node *tempi = NULL;
    tempi = (struct list_node *)malloc(sizeof(struct list_node));
    tempi->nxt = head_node;
    for (int i = 1; i < pos; i++)
    {
        head_node = head_node->nxt;
        if (head_node->nxt == tempi->nxt)
        {
            printf("Invalid Position!\n");
            return;
        }
    }
    struct list_node *new_node = NULL;
    new_node = (struct list_node *)malloc(sizeof(struct list_node));
    struct list_node *temp = head_node;
    temp = temp->nxt;
    head_node->nxt = temp->nxt;
}

void display(struct list_node *head_node)
{
    struct list_node *temp = NULL;
    temp = (struct list_node *)malloc(sizeof(struct list_node));
    temp->nxt = head_node;
    head_node = head_node->nxt;
    while (head_node != temp->nxt)
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
    head->nxt = head;
    int option = -1, num, pos;

    printf("\nChoose The Following:\n<1> Insert Node Front\n<2> Insert Node Back\n<3> Insert Node at given position\n<4> Delete Node Front\n<5> Delete Node Back\n<6> Delete Node at given position\n<7> Display\n<8> Exit");
    while (option != 8)
    {
        printf("\nOption: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Enter data: ");
            scanf("%d", &num);
            insert_node_front(num, head);
            break;
        case 2:
            printf("Enter data: ");
            scanf("%d", &num);
            insert_node_back(num, head);
            break;
        case 3:
            printf("Enter data: ");
            scanf("%d", &num);
            printf("Enter Position: ");
            scanf("%d", &pos);
            insert_node_given_position(num, pos, head);
            break;
        case 4:
            delete_node_front(head);
            break;
        case 5:
            delete_node_back(head);
            break;
        case 6:
            printf("Enter Position: ");
            scanf("%d", &pos);
            delete_node_given_position(pos, head);
            break;
        case 7:
            display(head);
            break;
        case 8:
            printf("\nThank you!");
            break;
        default:
            printf("\nChoose an approicate option!\n");
            break;
        }
    }
    return 0;
}