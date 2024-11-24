// 100. Same Tree
// https://leetcode.com/problems/same-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(vector<int> &v, TreeNode *root)
    {
        if (root != NULL){
        inorder(v, root->left);
        v.push_back(root->val);
        inorder(v, root->right);
        }
        else 
            v.push_back(100000);
    }
    void preorder(vector<int> &v, TreeNode *root)
    {
       if (root != NULL){
        v.push_back(root->val);
        preorder(v, root->left);
        preorder(v, root->right);
        }
        else 
            v.push_back(100000);
    }
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        vector<int> vi1;
        vector<int> vi2;
        vector<int> vp1;
        vector<int> vp2;

        inorder(vi1, p);
        inorder(vi2, q);
        preorder(vp1, p);
        preorder(vp2, q);

        if (vi1 == vi2 && vp1 == vp2)
            return true;
        return false;
    }
};
// --------------------------------------------------
class Solution
{
public:
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        if (p == NULL && q == NULL)
            return true;
        if (p == NULL || q == NULL)
            return false;
        return (p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
    }
};