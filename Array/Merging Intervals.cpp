//Q: https://www.geeksforgeeks.org/merging-intervals/

//Solution:

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int s=0;
        for(int i=1;i<intervals.size();i++){
            if(intervals[s][1]>=intervals[i][0])
                intervals[s][1]=max(intervals[s][1],intervals[i][1]);
            else{
                s++;
                intervals[s]=intervals[i];
            }
        }
        vector<vector<int>>res;
        for(int k=0;k<=s;k++)
            res.push_back(intervals[k]);
        return res;
    }
};

//TC: O(N*log N), SC: O(1)
