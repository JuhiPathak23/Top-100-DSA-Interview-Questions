//Q: https://www.geeksforgeeks.org/factorial-large-number/

//Solution:

class Solution {
public:
    vector<int> factorial(int N){
        vector<int>ans;
        ans.push_back(1);
        int carry =0;
        for(int i=2;i<=N;i++){
            for(int j=0;j<ans.size();j++){
                int x=ans[j]*i+carry;
                ans[j]=x%10;
                carry=x/10;
                
            }
            while(carry){
                ans.push_back(carry%10);
                carry/=10;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//TC: O(N^2), SC: O(1)
