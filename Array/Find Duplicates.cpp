//Q: https://www.geeksforgeeks.org/find-duplicates-in-on-time-and-constant-extra-space

//Solution:

class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int n) {
        // Your code here
        unordered_map<int,int>mp;
        vector<int>res;
        for(int i=0;i<n+2;i++){
            mp[arr[i]]++;
            if(mp[arr[i]]==2)   res.push_back(arr[i]);
        }
        return res;
    }
};

//TC: O(N), SC: O(N)
