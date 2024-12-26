//week16-7.cpp UVA299
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int T,N; //step01:input
	cin >> T;
	for(int t=0;t<T;t++){
		cin >> N;//step01:input
		vector<int> a(N);//step03:vector
		for(int i=0;i<N;i++){
		 	cin >> a[i];
		 }
		 //step04 bubble Sort
		 int ans=0;
		 for(int k=0;k<N-1;k++){
		 	for(int i=0;i<N-1;i++){
		 		if(a[i]>a[i+1]){
		 			swap(a[i],a[i+1]);
		 			ans++;
		 		}
		 	}
		 }
		 cout <<"Optimal train swapping takes " << ans << " swaps.\n";
	}//step02:output
	
}