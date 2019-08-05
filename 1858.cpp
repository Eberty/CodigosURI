#include <iostream>

using namespace std;

int main() {
	int n, t[101], menor=0;
	
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> t[i];
		if (t[i] < t[menor])
			menor = i;
	}
	
	cout << menor+1 << endl;
	return 0;
}
