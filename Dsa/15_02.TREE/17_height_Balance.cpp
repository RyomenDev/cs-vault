
// check for balance tree
// height of left subtree - height of right subtree <=1

// differene <=1

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *right, *left;
    Node(int x)
    {
        key = x;
        left = right = NULL;
    }
};

// o(n^2)

// int height(Node *root)
// {
//     if (root == NULL)
//         return 0;
//     else
//         return max(height(root->left), height(root->right)) + 1;
// }

// bool balancedTree(Node *root)
// {
//     if (root == NULL)
//         return true;
//     int lh = height(root->left);
//     int rh = height(root->right);
//     return ((abs(lh - rh) <= 1) && balancedTree(root->left) && balancedTree(root->right));
// }


// O(n)

int balancedTree(Node *root)
{
    if (root == NULL)
        return 0;
    int lh = balancedTree(root->left);
    if (lh == -1)
        return -1;
    int rh = balancedTree(root->right);
    if (rh == -1)
        return -1;
    if (abs(lh - rh) > 1)
        return -1;
    else
        return max(lh, rh) + 1;
}

int main()
{
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    // root->left->right->right = new Node(5);

    cout << balancedTree(root) << endl;

    return 0;
}