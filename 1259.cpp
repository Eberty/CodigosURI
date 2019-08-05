#include <bits/stdc++.h>

using namespace std;

bool decr (int i,int j) { return (i>j); }

int main () {
	int num, n;
	vector<int> impar, par;

	cin >> n;
	for (int i=0; i<n; i++){
		cin >> num;
		if (num%2 == 0)
			par.push_back(num);
		else
			impar.push_back(num);
	}

	sort (par.begin(), par.end());
	sort (impar.begin(), impar.end(), decr);

	for (auto& it : par)
		cout << it << endl;
	for (auto& it : impar)
		cout << it << endl;
		
	return 0;
}
