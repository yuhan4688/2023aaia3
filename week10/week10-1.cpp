///week10-1.cpp class
#include <iostream>
using namespace std;
///在寫class cat{寫完大括號，他幫你補完};再多打2個Enter
class Cat{ ///貓的類別
public:
    void print(){
        cout << "Im a cat. meow meow\n";
    }
};
class Mouse{
public:
    void print(){
        cout << "Im a mouse. chi chi\n";
    }
};
int main()
{
    ///大寫、小寫
    Cat cat,cat2; ///cat,cat2都是貓
    cat.print();
    cat2.print();
    Mouse mouse1,mouse2;
    mouse1.print();
    mouse2.print();
}
