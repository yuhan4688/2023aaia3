///week11-3.cpp 想看看 hash map 的對照表
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main()
{
    ///大二上的資結演算法
    unordered_map<string,int >m; ///又小又快
    m["蔡育綸"]=12750300;///左邊放字串，右邊放int 整數
    m["張偉宸"]=12750794;
    cout << "蔡育綸的學號是"<<m["蔡育綸"] << endl;
    cout << "張偉宸的學號是"<<m["張偉宸"] << endl;
}
