#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {

		int n,count = 1;
		cin >> n;

		bool lower = false;
		string g1, g2;

		cin >> g1;
		cin >> g2;

		string ans = "";
		ans += g1[0];

		for (int i = 1; i < n; ++i)
		{
			if (lower == false)
			{
				if (g1[i] < g2[i - 1]) {

					ans += g1[i];
					count = 1;
				} else if ( g1[i] ==  g2[i - 1]) {

					ans += g1[i];
					count++;
				} else {

					ans += g2[i - 1];
					lower = true;
				}
			}else
			{
				ans += g2[i-1];

			}

		}

		ans += g2[n-1];

		cout<<ans<<endl;
		cout<<count<<endl;

	}

	return 0;
}