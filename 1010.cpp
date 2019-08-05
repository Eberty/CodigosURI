#include <iostream>

using namespace std;

int main() {
	int cp1, cp2, n1, n2;
	double v1, v2;
	
	cin >> cp1 >> n1 >> v1;
	cin >> cp2 >> n2 >> v2;
	cout.precision(2);
	cout << "VALOR A PAGAR: R$ " << fixed << (n1*v1)+(n2*v2) << endl;
	
    return 0;
}
