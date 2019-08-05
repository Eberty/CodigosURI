#include <iostream>
#include <cmath>

using namespace std;

double fib (int);

int main() {
	int n;
	cout.precision(1);
	cout << fixed;
	cin >> n;
	cout << fib(n) << endl;
	return 0;
}

double fib (int n){
	return (pow((1+sqrt(5))/2.0, n) - pow((1-sqrt(5))/2.0, n))/sqrt(5);
}
