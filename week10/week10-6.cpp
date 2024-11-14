//week10-6.cpp LeetCode mathNO.4 976.Largest Perimeter Triangle
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int N=nums.size();
        //1,2,2,3,3,6,100,1000
        for(int i=0;i<N-2;i++){
            if(nums[N-1-i]<nums[N-2-i]+nums[N-3-i])
                return nums[N-1-i]+nums[N-2-i]+nums[N-3-i];
        }

        return 0;
    }
};