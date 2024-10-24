//week07-3a.cpp LeetCode657. Robot Return to Origin(再寫一次) 看機器人有沒有回原點
class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0; //一開始在(0,0)的位置
        for(char c : moves){//針對每一個移動的字母
            if(c=='U') y--;
            if(c=='D') y++;
            if(c=='L') x--;
            if(c=='R') x++;
        }
        if(x==0 && y==0) return true;//還在(0,0)就成功
        else return false;
    }
};