/*
*   Program to implement Tree and add Inorder, Preorder, Postorder.
*   @Author: Malay Bhavsar
*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create_node(int data)
{
    // Creating a new Node.
    struct node *new_node = NULL;
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

struct node *insert_right(struct node *root, int data)
{
    // Adding a new node with data = data to the right.
    root->right = create_node(data);
    return root;
}

struct node *insert_left(struct node *root, int data)
{
    // Adding a new node with data = data to the left.
    root->left = create_node(data);
    return root;
}

void insert(struct node *root, int num)
{
    while (root != NULL)
    {
        //printf("Root: %d\n", root->data);
        // If value greater or equal it goes to right.
        if (root->data > num)
        {
            if (root->right == NULL)
            {
                insert_right(root, num);
                break;
            }
            root = root->right;
        }
        // If value lesser then it goes to left.
        else if (root->data <= num)
        {
            if (root->left == NULL)
            {
                insert_left(root, num);
                break;
            }
            root = root->left;
        }
    }
}

void inorder(struct node *root)
{
    // Recursive function.
    if (root == NULL)
    {
        return;
    }
    //In Order --> Left -> Root -> Right
    inorder(root->left);
    printf(" %d -->", root->data);
    inorder(root->right);
}

void preorder(struct node *root)
{
    // Recursive function.
    if (root == NULL)
    {
        return;
    }
    //In Preorder --> Root -> Left -> Right
    printf("%d -->", root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct node *root)
{
    // Recursive function.
    if (root == NULL)
    {
        return;
    }
    //In Postorder --> Left -> Right -> Root
    postorder(root->left);
    postorder(root->right);
    printf("%d -->", root->data);
}

int main()
{
    // Making the root of the tree.
    struct node *root = NULL;
    // Taking number of elements and Elements.
    int N, num;
    printf("Enter number of elements: ");
    scanf("%d", &N);
    printf("Element[i]: ");
    scanf("%d", &num);
    root = create_node(num);
    for (int i = 1; i < N; i++)
    {
        printf("Element[i]: ");
        scanf("%d", &num);
        insert(root, num);
    }
    // Transversal goes here.
    printf("\nInorder: ");
    inorder(root);
    printf("\nPreorder: ");
    preorder(root);
    printf("\nPostorder: ");
    postorder(root);
    return 0;
}