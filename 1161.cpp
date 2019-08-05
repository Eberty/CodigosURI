#include <bits/stdc++.h>

using namespace std;

int main() {
	unsigned long long int m, n, v[22];
	
	v[0]=1;
	for (unsigned long long int i=1;i<22;i++){
		v[i]= i*v[i-1];
	}
	
	while (cin >> m >> n){
		cout << v[m] + v[n] << endl;
	}
	
	return 0;
}
