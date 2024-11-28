///week12-1.cpp 想了解 Linked List 的Node
///比較之前學過的class VS struct
#include <iostream>
using namespace std;
///struct Node {};///打大括號就幫你生下括號分號
///class Cat();///打大括號就幫你生下括號分號
struct Node {
    int val; ///value值
};
class Cat{
public:
    string name;
};
int main()
{
    Cat cat1; ///大寫形狀、宣告，小寫變數
    cat1.name="kitty";
    Node node;
    node.val=1; ///執行時，沒有comple Error 即可
}



