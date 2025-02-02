//Q: https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/?ref=roadmap

//Solution:

class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(vector<int> &arr) {
        // code here...
        long long maxsum=INT_MIN,cursum=0;
        for(int i=0;i<arr.size();i++){
            cursum+=arr[i];
            if(cursum>maxsum)   maxsum=cursum;
            if(cursum<0)    cursum=0;
        }
        return maxsum;
    }
};

//TC: O(N), SC: O(1)
