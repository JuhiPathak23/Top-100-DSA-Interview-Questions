//Q: https://www.geeksforgeeks.org/trapping-rain-water/

//Solution:

class Solution {
public:
    int trap(vector<int>& height) {
        int l=0,r=height.size()-1,lmax=0,rmax=0,res=0;
        while(l<=r){
            if(rmax<=lmax){
                res+=max(0,rmax-height[r]);
                rmax=max(rmax,height[r]);
                r--;
            }
            else{
                res+=max(0,lmax-height[l]);
                lmax=max(lmax,height[l]);
                l++;
            }
        }
        return res;
    }
};

//TC: O(N), SC: O(1)
