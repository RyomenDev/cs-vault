//94. Binary Tree Inorder Traversal

//https://leetcode.com/problems/binary-tree-inorder-traversal/submissions/

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
class Solution
{
public:
    void inorder(vector<int> &ans, TreeNode *root)
    {
        if (root == NULL)
            return;

        // traversing left part of tree
        inorder(ans, root->left);
        ans.push_back(root->val);

        // ans last traverse right part of tree
        inorder(ans, root->right);
    }
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        inorder(ans, root);
        return ans;
    }
};