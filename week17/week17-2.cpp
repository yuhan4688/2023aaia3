//week17-2.cpp LeetCode 學習計畫 66. Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N=digits.size();
        int carry=1;
        for(int i=N-1;i>=0;i--){
            digits[i]=digits[i]+carry;
            if(digits[i]>=10){//大於等於10,進位
                carry=1;
                digits[i]=digits[i]%10;
            }else{
                carry=0;
            }
        }
        if(carry==0) return digits;//沒進位,直接當答案
        else{
            vector<int> ans(N+1); //多1位(進位的carry)
            ans[0]=carry;//進位的放最前面
            for(int i=0;i<N;i++){
                ans[i+1]=digits[i];//左邊要避開carry的那一位
            }
            return ans;
        }
        
    }