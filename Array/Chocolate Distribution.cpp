//Q: https://www.geeksforgeeks.org/chocolate-distribution-problem/

//Solution:

int findMinDiff(int a[], int n, int m){
    if (m == 0 || n == 0)  return 0;
    sort(a,a+n);
    if (n < m)  return -1;
    int mindif=INT_MAX;
    for (int i=0;i+m-1<n; i++) {
        int dif=a[i+m-1]-a[i];
        if(dif<mindif)  mindif=dif;
    }
    return mindif;
}

//TC: O(N*log N), SC: O(1)
