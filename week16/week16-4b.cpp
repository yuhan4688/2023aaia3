//week16-4a.cpp Leetcode(隱藏)學習計畫 104. Maximum Depth of Binary Tree

class Solution {
public:
    int maxDepth(TreeNode* root) {
       if(root==nullptr) return 0; //需要終止條件Terminal condition
       int ans1=maxDepth(root->left);
       int ans2=maxDepth(root->right);
       return max(ans1,ans2)+1; 
    }
};