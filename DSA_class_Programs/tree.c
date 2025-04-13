#include <stdio.h>
#include <stdlib.h>

struct TreeNode
{
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode *createNode(int data)
{
    struct TreeNode *newNode = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct TreeNode *insertNode(struct TreeNode *root, int data)
{
    if (root == NULL)
    {
        return createNode(data);
    }

    else if (data < root->data)
    {
        root->left = insertNode(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insertNode(root->right, data);
    }

    return root;
}

void inorderTraversal(struct TreeNode *root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

int main()
{
    struct TreeNode *root = NULL;
    int n;

    printf("Enter the number of nodes in the binary tree: ");
    scanf("%d", &n);

    printf("Enter the values of the nodes:\n");
    int i;
    for (i = 0; i < n; i++)
    {
        int data;
        scanf("%d", &data);
        root = insertNode(root, data);
    }

    printf("Inorder Traversal of the Binary Tree: ");
    inorderTraversal(root);
    printf("\n");

    return 0;
}