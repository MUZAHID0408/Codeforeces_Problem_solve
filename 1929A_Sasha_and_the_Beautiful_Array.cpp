#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, sum = 0;
		cin>>n;
		vector<int> v;
		for(int i = 0; i< n; i++){
			int num;cin>>num;
			v.push_back(num);
		}
		sort(v.begin(), v.end(), greater<int>());

		for(int i = 0; i< n-1; i++){
			sum+=v[i]-v[i+1];
		}
		cout<< sum<<endl;
	}
	return 0;
}