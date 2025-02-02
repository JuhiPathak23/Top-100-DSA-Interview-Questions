//Q: https://www.geeksforgeeks.org/find-minimum-element-in-a-sorted-and-rotated-array/

//Solution:

class Solution {
  public:
    int solve(int a[],int low,int high){
        if(a[low]<a[high])  return a[low];
        int res=1e9;
        while(low<=high){
            int mid=(low+high)/2;
            if(a[mid]==a[low] && a[mid]==a[high])  {
                res=min(res,a[mid]);
                low++;
                high--;
            }
            else if(a[mid]>a[high]) low=mid+1;
            else{
                res=min(res,a[mid]);
                high=mid-1;
            }
        }
        return res;
    }
    int findMin(int arr[], int n) {
        // complete the function here
        int ans=solve(arr,0,n-1);
        return ans;
    }
};

//TC: O(log N), SC: O(1)
