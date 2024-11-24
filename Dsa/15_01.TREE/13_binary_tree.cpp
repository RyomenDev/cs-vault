
// size of binary tree == number of nodes

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

int sizeTree(Node *root)
{
    if (root == NULL)
        return 0;
    else
        return 1 + sizeTree(root->left) + sizeTree(root->right);
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

    cout << sizeTree(root) << endl; // 8
    return 0;
}