#include <iostream>
#include <math.h>

using namespace std;

int main() {
	double a, b, c, delta;
	cin >> a >> b >> c;
	delta = (b*b) - 4*a*c;
	if (delta < 0 || a==0)
		cout << "Impossivel calcular" << endl;
	else{
		cout.precision(5);
		cout << fixed;
		cout << "R1 = " << (-b+sqrt(delta))/(2.0*a) << endl;
		cout << "R2 = " << (-b-sqrt(delta))/(2.0*a) << endl;
	}
    return 0;
}
