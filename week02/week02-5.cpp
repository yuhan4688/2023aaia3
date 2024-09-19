//week02-5.cpp 242. Vaild Anagram
class Solution { //分析兩字串的字母是否成分相同
public:
    bool isAnagram(string s, string t) {
        int H1[256]={} ,H2[256]={}; //一開始有ASCII256中字母，都是0
        for(char c : s){//左字串
            H1[c]++;//放左邊H1[c]
        }
        for(char c : t){//右字串
            H2[c]++;//放右邊H2[c]
        }
        for(int i=0;i<256;i++){ //針對256種字母ˇ的成分，逐一比較是否相同
            if(H1[i] != H2[i]) return false;//不同就失敗
        }//離開迴圈，就沒有不同，就相同
        return true; //就成功
    }
};