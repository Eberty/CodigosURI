#include <bits/stdc++.h>

using namespace std;

int main() {
	int m, n, x;
	cin >> n >> m;
	set<int> fig;
	for (int i=0; i<m; i++){
		cin >> x;
		fig.insert(x);
	}
	cout << n-fig.size() << endl;
	return 0;
}
