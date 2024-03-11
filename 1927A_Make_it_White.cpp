#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, count = 0; cin>>n;
		string s = "";
		cin>>s;
		vector <int> a;
		for(int i= 0 ;i< n; i++){
			if(s[i] == 'B'){
				a.push_back(i+1); 
			}
		}
		int val = (a[a.size() - 1] - a[0] + 1);
		cout<<val<<endl;
	}
	return 0;
}
