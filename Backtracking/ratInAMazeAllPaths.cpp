// this code is Written by Afif Islam
bool isSafe(vector<vector<int>> &maze,int row,int col,vector<vector<int>> &ans,int n,vector<vector<int>> &res){
    // edge case 
   if(row<0 || col<0 || row>=n || col>=n || maze[row][col]==0 || ans[row][col]==1)return 0;
   
    // base case
   if(row==n-1 && col==n-1 && maze[row][col]==1){
       vector<int> temp;
       ans[row][col]=1;
       for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               temp.push_back(ans[i][j]);
           }
       }
       res.push_back(temp);
   }
   
   ans[row][col]=1; 
   isSafe(maze,row+1,col,ans,n,res);
   isSafe(maze,row-1,col,ans,n,res);
   isSafe(maze,row,col+1,ans,n,res);
   isSafe(maze,row,col-1,ans,n,res);
   ans[row][col]=0; // backtrack
}
vector<vector<int> > ratInAMaze(vector<vector<int> > &maze, int n){

    vector<vector<int>> ans(n,vector<int>(n,0));
    vector<vector<int>> res;

    isSafe(maze,0,0,ans,n,res);
    return res;
}