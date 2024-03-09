#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;
	while (t--) {
		int n, sd = 0;
		int pos_sum = 0, neg_sum = 0;
		cin >> n;
		vector <int> val;
		bool res = false;

		for (int i = 0; i < n; i++) {
			int num;
			cin >> num;
			val.push_back(num);
			sd+= num;
		}

		if (val.size() == 1) {
			cout << "YES" << endl;
			continue;
		}

		sd = sd / n;	
		for (int i = 0; i < n; i++) {

			if(val[i]-sd > 0){
				pos_sum+= (val[i]-sd); 
			}else if (val[i]-sd < 0){
				neg_sum+=(val[i]-sd);
			}

			if((pos_sum + neg_sum) < 0) res = true;

		}

		if((pos_sum+neg_sum) != 0) res = true;
		if(res == true)cout<<"NO"<<endl;
		else cout<<"YES"<<endl;

	}

	return 0;
}