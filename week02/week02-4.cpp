//week02-4.cpp leetcode 389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[256]={}; //陣列，裡面統計字母出現的次數，初始值為0(因為有大括號)
        for(char c : s){//針對字串s裡面每個字母，存在陣列對應格子裡
            H[c]++;//增加，多一個字母c，存在陣列對應格子裡
        }
        for(char c : t){
            H[c]--;//減少
            if(H[c]<0) return c;
        }
        return ' '; //都沒有傳空字母
    }
};