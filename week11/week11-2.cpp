///week11-2.cpp  �դ@�� C++2011 c++11���\��
#include <iostream>
#include <vector>
#include <unordered_map> ///c++11���\��
 using namespace std;
 ///setting �]�w-compiler �sĶ���]�w ��C++11
 int main()
{
    vector<int >a;
    unordered_map<int,int>m; ///�p�G�ιw�]��C++98�|����


    m[999]=13;
    m[137]=7;
    cout << "m[999]���ȬO:"<<m[999]<<endl;
    cout << "m[137]���ȬO:"<<m[137]<<endl;
    return 0;
}
