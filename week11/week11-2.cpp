///week11-2.cpp  試一試 C++2011 c++11的功能
#include <iostream>
#include <vector>
#include <unordered_map> ///c++11的功能
 using namespace std;
 ///setting 設定-compiler 編譯器設定 勾C++11
 int main()
{
    vector<int >a;
    unordered_map<int,int>m; ///如果用預設的C++98會不行


    m[999]=13;
    m[137]=7;
    cout << "m[999]的值是:"<<m[999]<<endl;
    cout << "m[137]的值是:"<<m[137]<<endl;
    return 0;
}
