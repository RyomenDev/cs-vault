
#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

node *newNode(int data)
{
    node *temp = new node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

void printPreorder(node *node)
{
    if (node == NULL)
        return;

    // traversing left part of tree
    cout << node->data << " ";
    printPreorder(node->left);

    // ans last traverse right part of tree
    printPreorder(node->right);
}
void printPostorder(node *node)
{
    if (node == NULL)
        return;

    // traversing left part of tree
    printPostorder(node->left);

    // ans last traverse right part of tree
    printPostorder(node->right);
    cout << node->data << " ";
}

int main()
{
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout << "Preorder traversal of tree : " << endl;
    printPreorder(root);
    cout << endl;
    cout << "Postorder traversal of tree : " << endl;
    printPostorder(root);
    cout << endl;
}
/*
            1
         /   \
       2       3
      /  \
   4      5

   */