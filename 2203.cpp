#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int xf, yf, xi, yi, vi, r1, r2;
	double dist;
	
	while (cin >> xf >> yf >> xi >> yi >> vi >> r1 >> r2){
		dist = sqrt(((xf-xi)*(xf-xi)) + ((yf-yi)*(yf-yi)));
		if ((double)(r1+r2) < dist + 1.5*vi)
			cout << "N" << endl;
		else
			cout << "Y" << endl;
	}
	
	return 0;
}
