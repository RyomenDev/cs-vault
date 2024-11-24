
// left most Value in binary tree

// O(N) TIME
// O(h) Auxilary space

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

int maxlevel = 0;
void printLeft(Node *root, int level)
{
    if (root == NULL)
        return;
    if (maxlevel < level)
    {
        cout << root->key << " ";
        maxlevel = level;
    }
    printLeft(root->left, level + 1);
    printLeft(root->right, level + 1);
}

void leftView(Node *root)
{
    printLeft(root, 1);
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(8);
    root->left->right = new Node(7);
    root->right->right = new Node(6);
    root->left->right->left = new Node(9);
    root->left->right->right = new Node(15);

    leftView(root); // 30
    return 0;
}