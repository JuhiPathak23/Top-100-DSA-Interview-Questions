//Q: https://www.geeksforgeeks.org/search-a-word-in-a-2d-grid-of-characters/

//Solution:

class Solution {
public:
    int dx[4]={-1,0,1,0};
    int dy[4]={0,1,0,-1};    
    bool isValid(int row,int col,int n,int m) {
        return row>=0 && row<n && col>=0 && col<m;
    }
    bool solve(int r,int c,int index,vector<vector<char>> &grid,vector<vector<bool>> &vis, string &word){   
        if(index==word.size()) return true;
        int m=grid.size(),n=grid[0].size();
        if (!isValid(r,c,m,n) || word[index]!=grid[r][c] || vis[r][c])  return false;
        vis[r][c]=true;
        for(int i=0;i<4;i++){
            int nr=r+dx[i];
            int nc=c+dy[i];
            bool p=solve(nr,nc,index+1,grid,vis,word);
            if(p) return true;
        }
        return vis[r][c]=false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size(),n=board[0].size();
        vector<vector<bool>>vis(m,vector<bool>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(solve(i,j,0,board,vis,word))    return true;
            }
        }      
        return false;
    }
};

//TC: O(M*N*4^N), SC:O(M*N)
