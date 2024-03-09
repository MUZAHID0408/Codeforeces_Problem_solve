#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;
	while (t--) {

		int n;
		cin>>n;
		bool br = false;

		for(char i = 'a'; i<= 'z';i++){
			for(char j = 'a' ; j <='z'; j++){
				for(char k = 'a'; k<='z'; k++){
					if((i+j+k)- 288 == n){
						cout<<i<<j<<k;
						br = true;
						goto end;

					}

				}
			}
		}
		end:
		if(br == true){
			cout<<endl;
		}

	}
	return 0;
}