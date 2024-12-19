//week15-2.cpp UVA12250 
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string hello;
	int t=1;
	while(cin >> hello){
		if(hello=="#") break;
		
		cout << "Case " << t << ": ";
		if(hello=="HELLO") cout<< "ENGLISH\n";
		if(hello=="HOLA") cout << "SPANISH\n";
		if(hello=="HALLO") cout << "GERMAN\n";
		if(hello=="BONJOUR") cout << "FRENCH\n";
		if(hello=="CIAO") cout << "ITALIAN\n";
		if(hello=="ZDRAVSTVUJTE") cout << "RUSSIAN\n";
		
		t++;
	}
}