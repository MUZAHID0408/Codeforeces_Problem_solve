#include <iostream>
using namespace std;


int main() {
	int t;
	cin >> t;

	while (t--) {

		int n1, n2;
		cin >> n1 >> n2;
		bool first = false, second = false;

		if (n1 % 2 == 0) {
			first = true;

		}
		if (n2 % 2 == 0) {
			second = true;
		}

		if (first == true and second  == true) {
			cout << "Yes";
			goto last;
		} else if (first == false and second  == false) {
			cout << "No";
			goto last;

		} else if (first == true and second == false) {
			int div;
			int mul = n1 * n2;
			div = n1 / 2;
			int res = div * (n2 + n2);
			if (div == n2 and (n2 + n2) == n1) {
				cout << "No";
				goto last;
			}
			else if (mul == res) {
				cout << "Yes";
			} else {
				cout << "No";
			}

		} else if ( first == false and second == true) {
			int div;
			int mul = n1 * n2;
			div = n2 / 2;
			int res = div * (n1 + n1);
			if (div == n1 and (n1 + n1) == n2) {
				cout << "No";
				goto last;
			}

			else if (mul == res) {
				cout << "Yes";
			} else {
				cout << "No";
			}
		}

last:
		cout << endl;

	}
	return 0;
}