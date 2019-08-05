#include <bits/stdc++.h>

using namespace std;

int fib (int n, int& calls){
	calls++;
	if (n==0 || n==1)
		return n;
	return fib(n-1, calls) + fib(n-2, calls);
}

int main() {
	int n, x;
	
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> x;
		int calls = -1;
		int res = fib(x, calls);
		cout << "fib(" << x << ") = " << calls << " calls = " << res << endl; 
	}
	
	
	return 0;
}
