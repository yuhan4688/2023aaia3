//week16-3.cpp Leetcode 學習計畫 50. Pow(x, n)
class Solution {
public:
    double helper(double x,long long int n){//改成很長的整數
        if(n==0) return 1;
        if(n==1) return x;
        double now=helper(x,n/2);
        if(n%2==0) return now *now;
        else return now *now *x;
    }
    double myPow(double x, long long int n) { //改成很長的整數
                double ans=1;
        if(n<0){ //遇到負的會失敗，把n變成正的
            n=-n;
            x=1/x; //-1次方就是1/x
        }
        return helper(x,n);
        
    }
};