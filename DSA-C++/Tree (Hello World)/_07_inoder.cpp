
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

void printInorder(node *node)
{
    if (node == NULL)
        return;

    // traversing left part of tree
    printInorder(node->left);
    cout << node->data << " ";

    // ans last traverse right part of tree
    printInorder(node->right);

}

int main()
{
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout << "Inorder traversal of tree : " << endl;
    printInorder(root);
}