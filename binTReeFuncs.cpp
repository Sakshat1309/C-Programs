#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
class node
{
public:
    int key;
    class node *left, *right;
};
node *newNode(int item)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
void inordertraversal(node *root)
{
    if (root != NULL)
    {
        inordertraversal(root->left);
        cout << root->key << " ";
        inordertraversal(root->right);
    }
}
node *insert(node *node, int key)
{
    if (node == NULL)
        return newNode(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);
    return node;
}
node *minValueNode(node *node1)
{
    node *current = node1;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}
node *deleteNode(node *root, int key)
{
    if (root == NULL)
        return root;
    if (key < root->key)
        root->left = deleteNode(root->left, key);
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
    else
    {
        if (root->left == NULL)
        {
            node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            return temp;
        }
        node *temp = minValueNode(root->right);
        root->key = temp->key;
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}
int main()
{
    cout << "Sakshat Gandhi" << endl;
    cout << "200911260" << endl;
    node *root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
    cout << "Inorder traversal of the given tree \n";
    inordertraversal(root);
    cout << "\nDelete 20\n";
    root = deleteNode(root, 20);
    cout << "Inorder traversal of the modified tree \n";
    inordertraversal(root);
    cout << "\nDelete 30\n";
    root = deleteNode(root, 30);
    cout << "Inorder traversal of the modified tree \n";
    inordertraversal(root);
    cout << "\nDelete 50\n";
    root = deleteNode(root, 50);
    cout << "Inorder traversal of the modified tree \n";
    inordertraversal(root);
    return 0;
}