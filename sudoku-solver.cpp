class Solution {
public:
    bool isSafe(int row , int col , vector<vector<char>>& board , char val){
        
        //check col
        for(int i = 0 ; i < 9 ; i ++){
            if(board[i][col] == val) return false;
        }
        //check row
        for(int i = 0 ; i < 9 ; i++){
            if(board[row][i] == val) return false;
        }
        //check box
        int x = (row/3)*3;
        int y = (col/3)*3;
        
        for(int i = x ; i < x+3 ; i++){
            for(int j = y ; j < y+3 ; j++){
                if(i != row || j != col){
                    if(board[i][j] == val) return false;
                }
            }
        }
        
        return true;
    }
    
    bool solve(vector<vector<char>>& board){
        int row = 0, col = 0;
        
        for(row=0; row <9 ; row++){
            for(col = 0; col < 9 ; col++){
                if(board[row][col] == '.'){ 
                    
                    
                    for(char val= '1' ; val <= '9' ; val++){
                        if(isSafe(row , col , board , val)){
                            board[row][col] = val;
                            if(solve(board)){
                                return true;
                            }
                            board[row][col] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        
        return true;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
