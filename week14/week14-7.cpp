//week14-7.cpp UVA10190 almost ok
#include <iostream>
using namespace std;
int main()
{
	int a,b; //input
	while(cin >> a >> b){
		if(b==1){ //special case
			cout << "Boring!\n";
			continue;
		}
	int bad=0,backup=a;
		while(a>1){//bopifa
			if(a%b>0) bad=1; //bad
			//cout << a << " ";
			a=a/b;
		}//bad
		if(bad==1) cout << "Boring!\n";
		else {
			a=backup;
			while(a>1){
				cout << a << " ";
				a=a/b;
			}
			cout << "1\n";
		}	
	}//output
}