///week10-3.cpp 進階class 裡建構函式、有資料、有方法
#include <iostream>
#include <string>
using namespace std;
class Cat{
 public:
    Cat(string _name){
        name=_name;
     }
    string name; ///變數、資料
    void print(){///函式、方法
        cout << "Im a cat. My name is " << name << "\n";
    }
};
int main()
{
    Cat cat1("小花"),cat2("小黃");
    cat1.print();
    cat2.print();
}

