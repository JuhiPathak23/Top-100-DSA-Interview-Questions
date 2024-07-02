//Q: https://www.geeksforgeeks.org/check-if-pair-with-given-sum-exists-in-array

//Solution:

class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    sort(arr,arr+n);
	    int l=0,r=n-1;
	    while(l<r){
	        if(arr[l]+arr[r]>x) r--;
	        else if(arr[l]+arr[r]<x)    l++;
	        else return 1;
	    }
	    return 0;
	}
};

//TC: O(N log N), SC: O(1)
