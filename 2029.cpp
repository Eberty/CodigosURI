#include <iostream>

using namespace std;

int main() {
	double v, d, altura, area;
	cout.precision(2);
	cout << fixed;
	
	while (cin >> v){
		cin >> d;	
		area = (3.14*(d/2)*(d/2));
		altura = v/area;
		
		cout << "ALTURA = " << altura << endl;
		cout << "AREA = " << area << endl;
	}
	
	return 0;
}
