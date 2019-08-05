#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, r, x;

	cin >> n;

	for (int i = 0; i < n; ++i){
		cin >> x;
		if (x%2)
			r = (x/2) + 1;
		else
			r = x/2;
		cout << r << endl;
	}

	return 0;
}
