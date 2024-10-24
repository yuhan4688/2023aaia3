//week07=1.cpp LeetCode1275.Find Winner on a Tic Tac Toe Game
class Solution {
public:
    void myPrintBoard(int board[3][3]){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout <<board[i][j] << " ";
            }
            cout <<"\n";
        }
        cout <<"\n";
    }
    string tictactoe(vector<vector<int>>& moves) 
    {   int board[3][3]={}; //裡面放0

        for(auto move:moves){ //用auto '幫你算好
            int i=move[0],j=move[1];
            myPrintBoard(board);
        }
        return "A";//勝利的是誰
    }
};