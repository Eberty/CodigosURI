#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	
	cin >> n;
	while (n){
		printf ("%d\n", (n*(n+1)) * ((2*n)+1) /6);
		cin >> n;
	}
	
	return 0;
}
