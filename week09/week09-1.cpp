//week09-1.cpp 學習計畫 leetcode1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int M=accounts.size();  //有幾個人
        int N=accounts[0].size(); //這個幾個帳戶
        int ans=0;
        for(int i=0;i<M;i++){ //第i個人
            int total=0;//迴圈前面total是0
            for(int j=0;j<N;j++){ //他的第j個帳號
                total += accounts[i][j]; // 中間tatal增加
            }
            if(total>ans) ans=total; //後面total拿來用
        }
        return ans;
    }
};