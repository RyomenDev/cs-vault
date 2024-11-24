
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
    // node *node = new struct node();
    node *element = new node(); // address of node in element
    element->data = data;
    element->left = NULL;
    element->right = NULL;
    return element;
}

void printNode(node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->left;
    }
    cout << endl;
}

int main()
{
    // make root node
    node *root = newNode(1);
    /*
             1
          /    \
        NULL   NULL
    */
    root->left = newNode(2);
    /*
            1
         /    \
       2       NULL
      /  \
   NULL   NULL
   */
    root->right = newNode(3);
    root->left->left = newNode(4);

    printNode(root);
}