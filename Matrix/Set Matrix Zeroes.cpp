//Q: https://www.geeksforgeeks.org/a-boolean-matrix-question/

//Solution:

class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        int r=matrix.size(),c=matrix[0].size(),k=0;
        for(int i=0;i<r;i++){
            if(matrix[i][0]==1) k=1;
            for(int j=1;j<c;j++){
                if(matrix[i][j]==1){
                    matrix[i][0]=1;
                    matrix[0][j]=1;
                }
            }
        }
        for(int i=r-1;i>=0;i--){
            for(int j=c-1;j>=1;j--){
                if(matrix[i][0]==1 || matrix[0][j]==1){
                    matrix[i][j]=1;
                }
            }
        if(k==1)    matrix[i][0]=1;
        }
    }
};

//TC: O(M*N), SC: O(1)
