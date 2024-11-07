//week09-3.cpp 73.Set Matrix Zeroes
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M=matrix.size(); //左手i
        int N=matrix[0].size(); //右手j
        vector<bool>left(M); //放左邊的勾勾有M格
        vector<bool>up(N); //放右邊的勾勾有N格
        for(int i=0;i<M;i++){//先完整的迴圈檢查全部的0在哪
            for(int j=0;j<N;j++){
                if(matrix[i][j]==0){ //如果是0就在左邊、上面打勾勾
                    left[i]=true; //左邊left[i]勾勾
                    up[j]=true;//上面up[j]勾勾
                }
            }
        }
        for(int i=0;i<M;i++){ //迴圈照著巡left[i]的值
            if(left[i]==true){
                for(int j=0;j<N;j++) matrix[i][j]=0; //整行清為0
            }
        }
        for(int j=0;j<N;j++){ //迴圈照著巡up[j]的值
            if(up[j]==true){
                for(int i=0;i<M;i++) matrix[i][j]=0;//整行清為0
            }
        }
    }
};