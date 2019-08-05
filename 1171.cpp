#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, aux, x[2010] = {0};
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> aux;
		x[aux]++;
	}
	
	for (int i=1; i<2010; i++){
		if (x[i])
			cout << i << " aparece " << x[i] << " vez(es)" << endl;
	}
	
	return 0;
}
