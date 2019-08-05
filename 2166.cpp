#include <iostream>

using namespace std;

double foo (int n){
	if (n==1)
		return 2;
	else
		return 2+1/foo(n-1);
}

int main() {
	int n;
	cout.precision(10);
	cout << fixed;
	cin >> n;
	if (n)
		cout << 1 + 1/foo(n) << endl;
	else
		cout << (double)1 << endl;
	return 0;
}
