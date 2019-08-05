#include <iostream>

using namespace std;

int main() {
	double a, b, c;
	
	cin >> a >> b >> c;
	cout.precision(1);
	cout << fixed;
	if (a<b+c && b<a+c && c<a+b)
		cout << "Perimetro = " << a+b+c << endl;
	else
		cout << "Area = " << ((a+b)*c)/2.0 << endl;
	
    return 0;
}
