///week11-3.cpp �Q�ݬ� hash map ����Ӫ�
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main()
{
    ///�j�G�W���굲�t��k
    unordered_map<string,int >m; ///�S�p�S��
    m["���|��"]=12750300;///�����r��A�k���int ���
    m["�i���f"]=12750794;
    cout << "���|�����Ǹ��O"<<m["���|��"] << endl;
    cout << "�i���f���Ǹ��O"<<m["�i���f"] << endl;
}
