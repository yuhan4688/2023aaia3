//week16-5.cpp Leetcode 94. Binary Tree Inorder Traversal
class Solution {
public:
    void helper(TreeNode* root, vector<int>& ans){
        if(root==nullptr) return;
        helper(root->left,ans); //左半邊 函式叫函式
        ans.push_back(root->val); //中間加到ans 裡面
        helper(root->right,ans);//右半邊 函式呼叫函式
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        helper(root,ans);
        return ans;
    }
};