//week06-2c.cpp vector array step5 6
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> a; //step03.vector array
	int now;
	while(cin >> now){//step01.input
	
		a.push_back(now);//step03.vector array
		
		sort(a.begin(),a.end());//step05.sort
		int N=a.size();
		if(N%2==1) cout <<a[N/2] << "\n";		
		else cout <<(a[N/2-1]+a[N/2])/2 << "\n";
		//for(int b:a) cout << b << ' ';
		//cout << "\n";//step04.print array
		//cout << now << "\n";//step02.output
	}
}