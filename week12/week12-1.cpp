///week12-1.cpp �Q�F�� Linked List ��Node
///������e�ǹL��class VS struct
#include <iostream>
using namespace std;
///struct Node {};///���j�A���N���A�ͤU�A������
///class Cat();///���j�A���N���A�ͤU�A������
struct Node {
    int val; ///value��
};
class Cat{
public:
    string name;
};
int main()
{
    Cat cat1; ///�j�g�Ϊ��B�ŧi�A�p�g�ܼ�
    cat1.name="kitty";
    Node node;
    node.val=1; ///����ɡA�S��comple Error �Y�i
}



