// geeksForGeeks  --> Rat in a Maze Problem-1
class Solution {
  private:
    bool isSafe(vector<vector<int>>& maze,vector<vector<int>>& visited,int x,int y,int n){
        if((x >= 0 && x < n) &&
          (y >= 0 && y < n) &&
          (visited[x][y] == 0) &&
          (maze[x][y] == 1)) {
              
               return true;
        }
        else return false;
    }
  private: 
    void solve(vector<vector<int>>& maze,int n,int x,int y,vector<vector<int>>& visited,
               vector<string>& ans,string path){
                  
        // base case
        if(x == n-1 && y == n-1) {
            ans.push_back(path);
            return;
        }
        visited[x][y] = 1;
        
        // Down
        int newX = x+1;
        int newY = y;
        if(isSafe(maze,visited,newX,newY,n)){
            path.push_back('D');
            solve(maze,n,newX,newY,visited,ans,path);
            path.pop_back();
        }
        
        // Right
        newX = x;
        newY = y+1;
        if(isSafe(maze,visited,newX,newY,n)){
            path.push_back('R');
            solve(maze,n,newX,newY,visited,ans,path);
            path.pop_back();
        }
        
        // Left
        newX = x;
        newY = y-1;
        if(isSafe(maze,visited,newX,newY,n)){
            path.push_back('L');
            solve(maze,n,newX,newY,visited,ans,path);
            path.pop_back();
        }
        
        // Up
        newX = x-1;
        newY = y;
        if(isSafe(maze,visited,newX,newY,n)){
            path.push_back('U');
            solve(maze,n,newX,newY,visited,ans,path);
            path.pop_back();
        }
        
        // Backtracking
        visited[x][y] = 0;
    }
  public:
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        int n = maze.size();
        vector<string> ans;
        if(maze[0][0] == 0){
            return ans;
        }
        string path = "";
        
        int srcX = 0;
        int srcY = 0;
        
        vector<vector<int>> visited(n, vector<int>(n, 0));
        
        // vector<vector<int>> visited = maze;
        
        // for(int i = 0; i< n; i++){
        //     for(int j = 0; j < n; j++){
        //         visited[i][j] = 0;
        //     }
        // }
        solve(maze,n,srcX,srcY,visited,ans,path);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
