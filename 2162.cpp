#include <iostream>

using namespace std;

int main() {
	int n, ok=1;
	cin >> n;
	int v[n], pv[n];
	cin >> v[0];
	for (int i=1; i<n; i++){
		cin >> v[i];
		if (v[i]<v[i-1])
			pv[i-1] = 1;
		else
			pv[i-1] = 0;
	}
	
	if (v[n-1] > v[n-2])
		pv[n-1] = 1;
	else
		pv[n-1] = 0;
		
	for (int i=1; i<n; i++){
		if (pv[i] == pv[i-1]){
			ok=0;
			break;
		}
	}
	
	cout << ok << endl;
	
	return 0;
}
