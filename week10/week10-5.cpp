//week10-5.cpp LeetCode 860.Lemonade Change
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5=0 ,d10=0,d20=0;//開始時沒有有零錢
        for(int c:bills){ //進階for迴圈
            if(c==5) d5++;
            if(c==10) { //要找5元
                if(d5>0){ //如果可以找錢
                    d10++; //加10
                    d5--;//5元減少
                } else return false; //沒辦法找錢
            } 
            if(c==20){ //給20找15
                if(d10>0 && d5>0){// 1*10+1*5
                    d20++;
                    d10--;
                    d5--;
                } 
                else if(d5>=3){
                    d20++;
                    d5-=3;
                }
                else return false;//沒辦法找錢
            }
        }
        return true; //可以錢成功
    }
};