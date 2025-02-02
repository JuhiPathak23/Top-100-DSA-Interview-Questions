//Q: https://www.geeksforgeeks.org/a-product-array-puzzle

//Solution:

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& arr, int n) {
        vector<long long int>left(n,1);
        vector<long long int>right(n, 1);
        vector<long long int>res(n, 1);
        for(int i=1;i<n;i++){
            left[i] = left[i - 1] * arr[i - 1];
        }
        for (int i = n - 2; i >= 0; i--) {
            right[i] = right[i + 1] * arr[i + 1];
        }
        for (int i = 0; i < n; i++) {
            res[i] = left[i] * right[i];
        }
        return res;
    }
};

//TC: O(N), SC: O(N)
