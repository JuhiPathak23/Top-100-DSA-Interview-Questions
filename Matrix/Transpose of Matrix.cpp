//Q: https://www.geeksforgeeks.org/program-to-find-transpose-of-a-matrix/

//Solution:

void transpose(int arr[n][n]) 
{ 
    for (int i = 0; i <n; i++) 
        for (int j = i + 1; j < n; j++) 
            swap(arr[i][j], arr[j][i]); 
} 

//TC: O(M*N), SC: O(1)
