////// THIS CODE IS WRITTEN BY AFIF ISLAM //////

// check if it is safe to place a queen in a particular box 
// we need to check three conditions 1.Horizontally 2.Diagonally up left 3.Diagonally down left

bool isSafe(int row,int col, vector<vector<int>>&board, int n){
    int r=row;
    int c=col;

    // checking diagonally left;

    while(r>=0 && c>=0){
        if(board[r][c]==1){
            return false;
        }
        r--;
        c--;
    }

    // checking horizontally upleft 

    r=row;
    c=col;
    while (c >= 0) {
        if (board[r][c] ==1)
            return false;
        c--;
    }

    // checking diagonally down left

    r=row;
    c=col;
    while(r<n && c>=0){
        if(board[r][c]==1){
            return false;
        }
        r++;
        c--;
    }
    // can be stored in that box then return true
    return true;
}

// check if it is safe to place at a particular column 
// if possible place it and check for next column 
// if not possible backtrack to previous column (Very Important)

void backTrack(vector<vector<int>>&ans, vector<vector<int>>&board, int n, int col){
    vector<int>temp;
    if(col==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                temp.push_back(board[i][j]);
            }
        }
        ans.push_back(temp);
        return;
    }
    for(int row=0; row<n; row++){
        if(isSafe(row,col,board,n)){
            board[row][col]=1;
            backTrack(ans,board,n,col+1);
            board[row][col]=0;
        }
    }
}
vector<vector<int>> solveNQueens(int n) {
    // Write your code here.
    vector<vector<int>>ans;
    vector<vector<int>>board(n,vector<int>(n,0));
    backTrack(ans,board,n,0);
    return ans;
}