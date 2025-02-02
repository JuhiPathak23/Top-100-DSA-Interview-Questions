//Q: https://www.geeksforgeeks.org/find-triplets-array-whose-sum-equal-zero/

//Solution:

class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        bool flag=false;
        for(int i=0;i<n-1;i++){
            unordered_set<int>s;
            for (int j=i+1; j < n;j++) {
                int x=-(arr[i]+arr[j]);
                if(s.find(x)!=s.end())  flag=true;
                else    s.insert(arr[j]);
            }
        }
        return flag;
    }
};

//TC: O(N^2), SC: O(1)
