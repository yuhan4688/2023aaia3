//week14-5.cpp UVA10190 not ok
#include <iostream>
using namespace std;
int main()
{
	int a,b; //input
	while(cin >> a >> b){
		while(a>0){//bopifa
			cout << a << " ";
			a=a/b;
		}
		
		cout << "Boring!\n";
	}//output
}