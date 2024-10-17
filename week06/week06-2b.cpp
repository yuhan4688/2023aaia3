//week06-2b.cpp vector array step3 4
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> a; //step03.vector array
	int now;
	while(cin >> now){//step01.input
		a.push_back(now);//step03.vector array
		for(int b:a) cout << b << ' ';
		cout << "\n";//step04.print array
		//cout << now << "\n";//step02.output
	}
}