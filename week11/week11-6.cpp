//week11-6.cpp LeetCode 1502Can Make Arithmetic Progression From Sequence
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
         sort(arr.begin(),arr.end()); //從小到大
         int N=arr.size();
         for(int i=0;i<N-2;i++){ //迴圈慢慢找
            if(arr[i]-arr[i+1]!=arr[i+1]-arr[i+2]) return false;
         } //如果不同就失敗
         return true; //離開迴圈就是成功
    }
};