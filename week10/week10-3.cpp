///week10-3.cpp �i��class �̫غc�禡�B����ơB����k
#include <iostream>
#include <string>
using namespace std;
class Cat{
 public:
    Cat(string _name){
        name=_name;
     }
    string name; ///�ܼơB���
    void print(){///�禡�B��k
        cout << "Im a cat. My name is " << name << "\n";
    }
};
int main()
{
    Cat cat1("�p��"),cat2("�p��");
    cat1.print();
    cat2.print();
}

