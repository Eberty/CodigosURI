#include <iostream>

using namespace std;

int main() {
	unsigned long long int t, n, v[65], i;
	v[0] = 0;
	v[1] = 1;
	for(i=2; i<65; i++)
		v[i] = v[i-1] + v[i-2];
	
	cin >> t;
	for(i=0; i<t; i++){
		cin >> n;
		cout << "Fib(" << n << ") = " << v[n] << endl;
	}
	
	return 0;
}
