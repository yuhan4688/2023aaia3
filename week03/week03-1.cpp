///week03-1.cpp 了解文法糖"range-based for 迴圈" 2011年才能用
///waring: range-based 'for' loops only available with -std=c++11 or -std=gnu++11
///CodeBlocks-settings-compiler 把 -std=c++11的2011年C++開啟來
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for(char c : s){
        if(c!='2') cout << c;
    }
    cout << "\n";
}
