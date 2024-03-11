#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, count = 0; cin >> n;
		int a[n];
		string res = "";
		vector <pair<char, int>> p;
		for (int i = 0; i < n; i++ ) {
			int val; cin >> val;
			if (val == 0) {
				char ran = 97 + count;
				res += ran;
				p.push_back(make_pair(ran, 1));
				count++;
			}
			if (val != 0) {
				for (auto& ans : p ) {
					if (val == ans.second) {
						res += ans.first;
						ans.second++;
						break;
					}
				}
			}
		}
		cout << res << endl;
	}
	return 0;

}
