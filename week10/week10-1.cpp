///week10-1.cpp class
#include <iostream>
using namespace std;
///�b�gclass cat{�g���j�A���A�L���A�ɧ�};�A�h��2��Enter
class Cat{ ///�ߪ����O
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
    ///�j�g�B�p�g
    Cat cat,cat2; ///cat,cat2���O��
    cat.print();
    cat2.print();
    Mouse mouse1,mouse2;
    mouse1.print();
    mouse2.print();
}
