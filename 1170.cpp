#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, dias;
	double c;
	
	cin >> n;
	
	for (int i=0; i<n; i++){
		cin >> c;
		dias=0;
		while(c > 1){
			dias++;
			c/=2;
		}
		cout << dias << " dias\n";
	}
	
	return 0;
}
