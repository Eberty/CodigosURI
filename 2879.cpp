#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, c, resp = 0;
	
	cin >> n;
	while (n--){
		cin >> c;
		if (c != 1) resp++;
	}
	cout << resp << endl;
	return 0;
}
