/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */

class Solution {
public:
    long long int solve(TreeNode* root, long long int x) {
        if (!root)
            return 0;
        x = (x * 10) + root->val;
        if (!root->left && !root->right)
            return x;
        return solve(root->left, x) + solve(root->right, x);
    }
    int sumNumbers(TreeNode* root) {
        return solve(root, 0);
    }
};