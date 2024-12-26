//week16-2b.cpp Leetcode 學習計畫 50. Pow(x, n)
class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        if(n<0){ //遇到負的會失敗，把n變成正的
            n=-n;
            x=1/x; //-1次方就是1/x
        }
        for(int i=0;i<n;i++){ //遇到負的會失敗
            ans*= x;
        }
        return ans;
        
    }
};