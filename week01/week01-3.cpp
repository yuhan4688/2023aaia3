//week01-3.cpp soit106 base 002
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	cout << n;
	cout << "=50*";
	cout << n/50;
	cout << "+5*";
	cout << n%50 / 5;
	cout << "+1*";
	cout << n%5;
	cout <<"\n";	
}