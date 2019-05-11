#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int key;
    struct node *left, *right;
};
struct node *newNode(int item)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
struct node* insert(struct node* node, int key)
{
      if (node == NULL) return newNode(key);
    if (key < node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    return node;
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}
int main()
{
    struct node *root = NULL;
    root = insert(root,45);
    insert(root, 36);
    insert(root, 22);
    insert(root, 42);
    insert(root, 69);
    insert(root, 55);
    insert(root, 85);
    cout<<"The inorder is : ";
    inorder(root);
    return 0;
}
