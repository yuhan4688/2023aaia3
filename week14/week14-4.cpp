//函式呼叫函式
//week14-4.cpp LeetCode 104. Maximum Depth of Binary Tree
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr) return 0; //終止條件 terminal condition 終止條件
        return 1 + max(maxDepth(root->left),maxDepth(root->right));
    }
};
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