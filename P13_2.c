/*
*   Program to implement Joseph's
*   @Author: Malay Bhavsar
*/

#include <stdio.h>
#include <stdlib.h>

// Defining the structure.
struct list_node
{
    int data;
    struct list_node *nxt;
};
/*
int survivor(struct node **head, int k)
{
    struct node *p, *q;
    int i;

    q = p = *head;
    while (p->next != p)
    {
        for (i = 0; i < k - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        printf("%d has been killed.\n", p->num);
        free(p);
        p = q->next;
    }
    *head = p;

    return (p->num);
}
*/
void insert_node(int num, struct list_node *head_node)
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

void display(struct list_node *head_node)
{
    struct list_node *temp = NULL;
    temp = (struct list_node *)malloc(sizeof(struct list_node));
    temp->nxt = head_node;
    printf(" %d ", head_node->data);
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
    head->data = 1;
    head->nxt = head;
    int number, skip;
    printf("\nEnter number of person: ");
    scanf("%d", &number);
    printf("\nEnter number of persons to skip: ");
    scanf("%d", &skip);
    // Making a circular linked list
    for (int i = 1; i < number; i++)
    {
        insert_node(i + 1, head);
    }
    // Displaying the liked list.
    printf("\nYour circular list: ");
    display(head);
    // Showing the surviver!
    struct list_node *temp = NULL;
    temp = (struct list_node *)malloc(sizeof(struct list_node));
    temp = head;
    while (temp->nxt != temp)
    {
        for (int i = 0; i < skip; i++)
        {
            head = temp;
            temp = temp->nxt;
        }
        head->nxt = temp->nxt;
        printf("\n%d killed %d", head->data, temp->data);
        free(temp);
        temp = head->nxt;
    }
    head = temp->nxt;

    // Displaying the left person.
    printf("\nPerson left to survive: %d", head->data);
}