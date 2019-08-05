#include <iostream>

using namespace std;

double foo (int n){
	if (n==1)
		return 6;
	else
		return 6+1/foo(n-1);
}

int main() {
	int n;
	cout.precision(10);
	cout << fixed;
	cin >> n;
	if (n)
		cout << 3 + 1/foo(n) << endl;
	else
		cout << (double)3 << endl;
	return 0;
}
