//Q: https://www.geeksforgeeks.org/search-an-element-in-a-sorted-and-pivoted-array/

//Solution:

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        int mid;
        while(low<=high){
            mid=(high+low)/2;
            if(nums[mid]==target) return mid;
            else if(nums[low]<=nums[mid]){
                if(target>=nums[low] && target<=nums[mid])    high=mid-1;
                else    low=mid+1;
            }
            else{
                if(target>=nums[mid] && target<=nums[high])    low=mid+1;
                else    high=mid-1;
            }
        }
        return -1;
    }
};

//TC: O(log N), SC: O(1)
