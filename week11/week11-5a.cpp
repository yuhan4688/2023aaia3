//week11-5.cpp LeetCode 1822. Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;
        for(int num:nums){
            if(num>0) ans*=1; //不意乘多
            if(num==0) ans *=0; //只乘+1,0,-1
            if(num<0) ans*=-1;
        }//不要乘太多
        if(ans>0) return 1;
        else if(ans==0) return 0;
        else return -1;
    } //成功
};