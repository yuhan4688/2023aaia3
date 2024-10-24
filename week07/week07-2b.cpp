//week07=2.cpp LeetCode1275.Find Winner on a Tic Tac Toe Game
//1便2便1變2 因1+2=3
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
    bool myTestWin(int board[3][3],int now){
        if(board[0][0]==now && board[0][1]==now && board[0][2]==now) return true; //上面橫
        if(board[1][0]==now && board[1][1]==now && board[1][2]==now) return true; //中面橫
        if(board[2][0]==now && board[2][1]==now && board[2][2]==now) return true; //下面橫

        if(board[0][0]==now && board[1][0]==now && board[2][0]==now) return true; //左面直
        if(board[0][1]==now && board[1][1]==now && board[2][1]==now) return true; //中面直
        if(board[0][2]==now && board[1][2]==now && board[2][2]==now) return true; //下面直

        if(board[0][0]==now && board[1][1]==now && board[2][2]==now) return true;//左上右下
        if(board[0][2]==now && board[1][1]==now && board[2][0]==now) return true;//右上左下
        return false;
        
    }//要看看誰連線成功
    string tictactoe(vector<vector<int>>& moves) 
    {   int board[3][3]={}; //裡面放0
        int now=1; //第1個叫A 2個叫B
        for(auto move:moves){ //用auto '幫你算好
            int i=move[0],j=move[1];
            board[i][j]=now;
            myPrintBoard(board);
            if(myTestWin(board,now)){
                if(now==1) return "A";
                else return "B";
            }
            now=3-now;//1便2便1變2
        }
        if(moves.size()==9) return "Draw";//都沒有勝利的話
        else return "Pending"; //等你下
    }
};