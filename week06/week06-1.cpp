///week06-1.cpp std 出現好多次 stdio.h stdlib
#include <iostream>
#include <vector>
#include <algorithm> ///好用的演算法EXsort()
using namespace std;
int main()
{
    vector<int > a; ///動態陣列a可以裝很多list
    a.push_back(20);///推進去陣列的最後面
    a.push_back(30);
    a.push_back(40);
    a.push_back(10);
    for(int i=0;i<a.size();i++){
        cout <<a[i]<< "\n";///用 a[i]取出來

    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++) cout <<a[i]<<' ';
}
