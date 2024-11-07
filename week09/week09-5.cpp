//09-5.cpp 1523. Count Odd Numbers in an Interval Range (頭尾包含)範圍內有幾個單數
class Solution {
public:
    int countOdds(int low, int high) {
        int ans=(high-low)/2; //好像是答案，但有時候會小一點
        if(low%2==1 || high%2==1) ans++; //因為如果頭尾有單數，要加1個數
        return ans;
    }
};