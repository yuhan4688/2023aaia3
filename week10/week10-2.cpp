///week10-2.cpp 進階class 裡有資料、有方法
#include <iostream>
using namespace std;
class Cat{
 public:
    string name; ///變數、資料
    void print(){///函式、方法
        cout << "Im a cat. My name is " << name << "\n";
    }
};
int main()
{
    Cat cat1,cat2;
    cat1.name="小花";
    cat2.name="小黃";
    cat1.print();
    cat2.print();
}
