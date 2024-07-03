//Q: https://www.geeksforgeeks.org/find-non-overlapping-intervals-among-a-given-set-of-intervals

//Solution:

struct interval {
	int start, end;
};
bool cmp(interval i1, interval i2){
	return (i1.start < i2.start);
}
void findFreeinterval(interval a[], int n){
	if (N <= 0)  return;
	vector<pair<int, int> >p;
	sort(a,a+n,cmp);
	for (int i=1;i<n;i++) {
		int prevend = a[i-1].end;
		int curstart= a[i].start;
		if (prevend<curstart) {
			p.push_back({ prevend,curstart});
		}
	}
	for (auto& i:p) {
		cout << "[" << i.first << ", "<< i.second << "]" << endl;
	}
}

//TC: O(N* log N), SC: O(1)
