//week06-5.cpp LeetCode670. Maximum Swap(火花題)
class Solution {
public:
    int maximumSwap(int num) {
        int ans=num;//做簡單的答案就是本身
        string s=to_string(num);//stoi()反過來
        //for(int i=0;i<s.lentgh();i++){
        //    cout<< s[i]<< ' '//中間要用迴圈，更新答案
        //}
        for(int i=0;i<s.length()-1;i++){ //左手i
            for(int j=i+1;j<s.length();j++){ //右手j
                swap(s[i],s[j]); //交換
                ans=max(ans,stoi(s)); //看是否更大
                swap(s[i],s[j]);//在交換
            }
            
        }
        return ans;
    }
};