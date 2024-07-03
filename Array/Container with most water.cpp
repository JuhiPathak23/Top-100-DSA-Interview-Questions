//Q: https://www.geeksforgeeks.org/container-with-most-water/

//Solution:

long long maxArea(long long A[], int len)
{
    // Your code goes here
    long long l=0,r=len-1,area=0;
    while(l<r){
        area=max(area,min(A[l],A[r])*(r-l));
        if(A[l]<A[r])   l++;
        else r--;
    }
    return area;
}

//TC: O(N), SC: O(1)
