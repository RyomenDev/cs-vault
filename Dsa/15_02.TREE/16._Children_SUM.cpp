
// CHILDREN SUM PPROPERTY
// sum of values of left and right child == nodes Value

// O(N) O(h)

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *right, *left;
    Node(int k)
    {
        key = k;
        right = left = NULL;
    }
};

bool ChildSum(Node *root)
{
    if (root == NULL)
        return true;
    if (root->left == NULL && root->right == NULL)
        return true;
    int sum = 0;
    if (root->left != NULL)
        sum += root->left->key;
    if (root->right != NULL)
        sum += root->right->key;
    return (root->key == sum && ChildSum(root->left) &&
            ChildSum(root->right));
}

int main()
{
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left = new Node(3);
    root->left->right = new Node(5);

    cout << ChildSum(root) << endl;

    return 0;
}
