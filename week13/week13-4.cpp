//week13-3.cpp AoC2024 Day01
//LeetCode 右上角 playground
//input放右下角stdin的標準輸入區
//前面LeetCode 幫妳寫好 #include <iostream> #include <vector> using namespace std;
//前密都寫好了不用寫，方便玩
int main() {
    vector<int >A,B;
    int a,b;
    while(cin >> a >> b){ //step01:input
        A.push_back(a);//step2:放陣列
        B.push_back(b);
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int ans=0;
    for(int i=0;i<A.size();i++){//step3:output
        cout << A[i]<< " ";
        ans+=abs(A[i]-B[i]);
    }
    cout << "答案是: " << ans;
}