//week16-6.cpp SOIT106 ADVANCE 011
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int d1=s[0]-'0';
	int d2=s[1]-'0';
	int d3=s[2]-'0';
	int d4=s[3]-'0';
	cout << d1*8+d2*4+d3*2+d4*1 << "\n";
}