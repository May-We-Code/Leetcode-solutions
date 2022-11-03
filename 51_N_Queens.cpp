class Solution {
public:
    bool is_safe(int row,int col,vector<string> chess){
        for(int i=0;i<row;i++){
            if(chess[i][col]=='Q') return false;
        }
        for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
            if(chess[i][j]=='Q') return false;
        }
        for(int i=row-1,j=col+1;i>=0 && j<chess[i].size();i--,j++){
            if(chess[i][j]=='Q') return false;
        }
        return true;
    }
    void printNQueens(vector<string> chess,vector<vector<string>> &s,int row){
        if(chess.size()==0) return;
        if(row==chess.size()) {s.push_back(chess);return;}
        
        for(int i=0;i<chess[0].size();i++){
            if(is_safe(row,i,chess)){
                chess[row][i]='Q';
                printNQueens(chess,s,row+1);
                chess[row][i]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        string st="";
        for(int i=0;i<n;i++){
            st+=".";
        }
        vector<string> s(n,st);
        vector<vector<string>> v;
        printNQueens(s,v,0);
        return v;
        
    }
};
