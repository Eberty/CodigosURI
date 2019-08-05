#include <bits/stdc++.h>

using namespace std;

int main() {
	int q, v, res=0;
	cin >> q;
	for (int i=0; i<q; i++){
		cin >> v;
		if (!v)
			res++; 
	}
	if (res > q/2)
		cout << "Y" << endl;
	else
		cout << "N" << endl;
	return 0;
}
