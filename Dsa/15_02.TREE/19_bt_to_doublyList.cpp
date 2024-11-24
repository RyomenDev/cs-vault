// convert binary tree to doubly linked list
// no extra space allocated

// use left ref as prev pointer
// use right ref as next pointer

// BY inorder traversal
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *right, *left;
    Node(int x)
    {
        key = x;
        right = left = NULL;
    }
};

// 4:30
struct List
{
    int key;
    List *prev, *next;
    List(int x)
    {
        key = x;
    }
};

int main()
{
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    root->right->right = new Node(5);

    return 0;
}