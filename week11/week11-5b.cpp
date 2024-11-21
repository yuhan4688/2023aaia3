//week11-5.cpp LeetCode 1822. Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;
        for(int num:nums){
            ans*=num; //太多數字乘起來 ，爆炸 overflow
        }
        if(ans>0) return 1;
        else if(ans==0) return 0;
        else return -1;
    } //這是錯的
};