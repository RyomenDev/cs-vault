
// print nodes at k distance

// O(n)
// auxilary space O(h)

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

void printNodes(Node *root, int k)
{
    if (root == NULL)
        return ;
    if (k == 0)
        cout << root->key << " ";
    else
    {
        printNodes(root->left, k - 1);
        printNodes(root->right, k - 1);
    }
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->right = new Node(70);

    int k = 2;
    printNodes(root, k);  // 40 50 70 
    return 0;
}